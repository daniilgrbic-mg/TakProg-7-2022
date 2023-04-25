import os
import sys
import time
from colorama import Fore, Style

def compare_files(file1, file2):
    with open(file1, "r") as file1:
        with open(file2, "r") as file2:
            result = (file1.read() == file2.read())
            return result

in_ext = "in"
out_ext = "out"
temp_file = "tmp.out"

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("usage: python tester.py <solution_path> <test_dir>")
    
    solution_path = sys.argv[1]
    test_dir = sys.argv[2]

    test_files = os.listdir(test_dir)
    test_files = [file for file in test_files if file.endswith(f".{in_ext}")]
    test_files.sort()
    total = len(test_files)
    passed = 0

    start_time = time.time()
    os.system(f"g++ {solution_path} -O2")
    print(Fore.YELLOW + f'Compiled {solution_path} in {time.time()-start_time:.3f} seconds' + Style.RESET_ALL)

    for test in test_files:
        print(Fore.WHITE + f"Test {test}: ", end="")

        test_path = os.path.join(test_dir, test)

        start_time = time.time()
        os.system(f"./a.out < {test_path} > {temp_file}")

        test_out = test_path.replace(in_ext, out_ext)
        if compare_files(test_out, temp_file):
            passed += 1
            print(Fore.GREEN + "OK", end="")
        else:
            print(Fore.RED + "WA", end="")

        print(Style.RESET_ALL + f' in {time.time()-start_time:.3f}s')
        
        os.remove(temp_file)

    print(Fore.WHITE + "-"*12 + f"\nPassed {passed}/{total} ({passed/total*100:.2f}%)")

    print(Style.RESET_ALL, end="")
