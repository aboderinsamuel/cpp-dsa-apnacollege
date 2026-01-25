# C++ Data Structures & Algorithms (apna-college style)

This repository is a hands-on, well-organized collection of C++ (C++17) solutions for common Data Structures & Algorithms problems. It’s designed for learning, interview prep, and as a reference for writing clear, performance-minded C++ code.

Goals
- Clear, minimal, and self-contained solutions for each problem.
- Organization by DSA topic so you can focus on one concept at a time.
- Easy to build and run locally (CLion/CMake or command-line).

What’s in this repo
- Top-level folders named by topic (e.g. `01_arrays_hashing`, `02_two_pointers`, ...).
- Each `.cpp` file is a standalone solution/example for a specific problem.
- A `CMakeLists.txt` so the code can be opened with CLion or built with CMake.
- `.gitignore` that excludes build artifacts and compiled binaries (good practice).

Quick index (examples)
- `01_arrays_hashing/` — array & hashing problems (2-sum, grouping anagrams, etc.)
- `02_two_pointers/` — two-pointer pattern problems
- `03_sliding_window/` — sliding-window pattern problems
- ... and more topic folders following the same naming scheme.

Prerequisites
- C++ compiler supporting C++17 (g++, clang, MSVC)
- CMake (to build with the included CMakeLists)
- Optional: CLion or other C++ IDE for easier navigation

Build & run (recommended via CMake)
1. Open the repository in CLion (it will auto-detect the CMake project) — recommended for day-to-day work.

OR build from the command line (PowerShell on Windows):

```powershell
cd 'C:\Users\USER\CLionProjects\cpp-dsa-apnacollege - Copy'
mkdir -Force build
cd build
cmake ..
cmake --build . --config Release
```

This will build the executables into the build output folder (depending on your generator). To run a specific example executable produced by CMake, run the binary from the build output directory.

Quick single-file compile (if you want to compile one `.cpp` without CMake):

```powershell
cd 'C:\Users\USER\CLionProjects\cpp-dsa-apnacollege - Copy\01_arrays_hashing'
# compile
g++ -std=c++17 03_contains_duplicate.cpp -o 03_contains_duplicate.exe
# run
.\03_contains_duplicate.exe
```

Note: the repository's `.gitignore` already excludes `*.exe` and common build folders (e.g., `cmake-build-debug/`). This prevents committing compiled binaries — a recommended practice.

Working after forking (how to use this project correctly)
If you forked this repository and want to contribute or keep your fork up to date, follow these steps.

1) Clone your fork
```powershell
git clone https://github.com/<your-username>/cpp-dsa-apnacollege.git
cd cpp-dsa-apnacollege
```

2) Add the original repo as an upstream remote (optional but recommended)
```powershell
git remote add upstream https://github.com/<original-owner>/cpp-dsa-apnacollege.git
git fetch upstream
```

3) Create a branch for your work
```powershell
git checkout -b feat/my-new-solution
```

4) Add or modify files
- Add `.cpp` source files or edit existing ones.
- Avoid committing compiled binaries — they’re ignored by default.

5) Stage and commit
- Stage all source changes (safe):
```powershell
git add -- '*.cpp' '*.h' CMakeLists.txt
git commit -m "Add: <short description>" -m "Longer description if needed"
```
- Or to stage everything that's not ignored:
```powershell
git add .
git commit -m "Add multiple solutions"
```

6) Push and open a pull request
```powershell
git push origin feat/my-new-solution
# then open a PR via GitHub UI: compare your branch to upstream/main
```

Keeping your fork up to date
```powershell
git fetch upstream
git checkout main
git merge upstream/main
# or rebase: git rebase upstream/main
git push origin main
```

About files created by AI or bulk-generated files
- Source files (.cpp, headers) are fine to add and commit. Use meaningful filenames and good comments.
- Do NOT commit build artifacts (executables, .o/.obj, libraries). They are ignored by default (`.gitignore`).
- If you accidentally created files that match `.gitignore` (for example `.exe`), do one of the following:
  - Rebuild only when needed locally, and do not commit the binary.
  - If you intentionally want to check in a binary (rare), remove or change the matching `.gitignore` pattern and then `git add -f <path>` to force-add it. Example to un-ignore a single file (not recommended):

```text
# in .gitignore
*.exe
# to unignore a specific path, add below (exact path)
!/06_linked_list/01_reverse_list.exe
```
Then you may need to `git add -f` for that path.

Best practices & contribution tips
- Keep each `.cpp` self-contained and minimal; include a short comment with the problem link (if any), complexity, and approach.
- Prefer adding tests or small main drivers that demonstrate correctness for edge cases.
- Use clear commit messages: prefix with `Add:`, `Fix:`, `Refactor:`, `Docs:`.
- Create small focused pull requests — easier to review and merge.

Troubleshooting
- If Git isn’t picking up files you expect:
  - Make sure the files are inside the repository folder (within the `.git` tree).
  - Run `git status --porcelain -uall` and `git ls-files --others --exclude-standard` to inspect untracked/ignored files.
  - Check `.gitignore`, `.git/info/exclude`, and global excludes (`git config --get core.excludesfile`).

Contact / maintaining this repo
- If you want me to help with batch-commits, cleaning up ignored files, or creating a standardized test harness, tell me which action you’d like and I can perform it.

License
- Add your preferred license file (`LICENSE`) at project root if you plan to open-source the fork.

---

Happy learning — and good luck with interview prep!
