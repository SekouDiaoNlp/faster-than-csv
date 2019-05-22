# Faster-than-CSV

[![screenshot](https://source.unsplash.com/eH_ftJYhaTY/800x402)](https://youtu.be/QiKwnlyhKrk?t=5)

| Library                       | Speed    |
|-------------------------------|----------|
| Pandas `read_csv()`           | `20.09`  |
| NumPy `fromfile()`            | `3.88`   |
| NumPy `genfromtxt()`          |  `4.00`  |
| NumPy `loadtxt()`             |  `1.26`  |
| csv (std lib)                 |  `0.40`  |
| csv (list)                    |  `0.38`  |
| csv (map)                     |  `0.37`  |
| Faster_than_csv               |  `0.10`  |

- This CSV Lib is ~130 Lines of Code.

<details>

- Benchmarks run on Docker from Dockerfile on this repo.
- Speed is IRL time to complete 10000 CSV Parsings.
- Lines Of Code counted using [CLOC](https://github.com/AlDanial/cloc).
- Direct dependencies of the package when ready to run.
- Benchmarks run on Docker from Dockerfile on this repo.
- Stats as of year 2019.
- x86_64 64Bit AMD, SSD, Arch Linux.

</details>


# Use

```python
import faster_than_csv as csv

print(csv.csv2list("sample.csv"))  # See Docs for more info.
```


# csv2dict()
<details>

**Description:**
Takes a path of a CSV file string, process CSV and returns a list of dictionaries.

**Arguments:**
- `csv_file_path` path of the CSV file, `str` type, required, must not be empty string.
- `has_header` Set to `True` for CSV with Header, `bool` type, optional, defaults to `True`.
- `separator` Separator character of the CSV data, `str` type, optional, defaults to `','`, must not be empty string.
- `quote` Quote character of the CSV data, `str` type, optional, defaults to `'"'`, must not be empty string.
- `skipInitialSpace` Set to `True` to ignore empty blank whitespace at the start of the CSV file, `bool` type, optional, defaults to `False` since is not technically valid.

**Returns:**
Data from the CSV, `dict` type.

</details>


# csv2json()
<details>

**Description:**
Takes a path of a CSV file string, process CSV and returns JSON.

**Arguments:**
- `csv_file_path` path of the CSV file, `str` type, required, must not be empty string.
- `has_header` Set to `True` for CSV with Header, `bool` type, optional, defaults to `True`.
- `separator` Separator character of the CSV data, `str` type, optional, defaults to `','`, must not be empty string.
- `quote` Quote character of the CSV data, `str` type, optional, defaults to `'"'`, must not be empty string.
- `skipInitialSpace` Set to `True` to ignore empty blank whitespace at the start of the CSV file, `bool` type, optional, defaults to `False` since is not technically valid.

**Returns:**
Data from the CSV as JSON Minified Single-line string computer-friendly, `str` type.

</details>


# csv2json_pretty()
<details>

**Description:**
Takes a path of a CSV file string, process CSV and returns JSON.

**Arguments:**
- `csv_file_path` path of the CSV file, `str` type, required, must not be empty string.
- `has_header` Set to `True` for CSV with Header, `bool` type, optional, defaults to `True`.
- `separator` Separator character of the CSV data, `str` type, optional, defaults to `','`, must not be empty string.
- `quote` Quote character of the CSV data, `str` type, optional, defaults to `'"'`, must not be empty string.
- `skipInitialSpace` Set to `True` to ignore empty blank whitespace at the start of the CSV file, `bool` type, optional, defaults to `False` since is not technically valid.

**Returns:**
Data from the CSV as JSON Pretty-Printed Multi-line string human-friendly, `str` type.

</details>


# csv2ndjson()
<details>

**Description:**
Takes a path of a CSV file string, process CSV and returns NDJSON.

**Arguments:**
- `csv_file_path` path of the CSV file, `str` type, required, must not be empty string.
- `ndjson_file_path` path of the NDJSON file, `str` type, required, must not be empty string.
- `has_header` Set to `True` for CSV with Header, `bool` type, optional, defaults to `True`.
- `separator` Separator character of the CSV data, `str` type, optional, defaults to `','`, must not be empty string.
- `quote` Quote character of the CSV data, `str` type, optional, defaults to `'"'`, must not be empty string.
- `skipInitialSpace` Set to `True` to ignore empty blank whitespace at the start of the CSV file, `bool` type, optional, defaults to `False` since is not technically valid.

**Returns:** None.
Data from the CSV as NDJSON https://github.com/ndjson/ndjson-spec, `str` type.

</details>


# csv2htmltable()
<details>

**Description:**
Takes a path of a CSV file string, process CSV and returns the data rendered on HTML Table.

**Arguments:**
- `csv_file_path` path of the CSV file, `str` type, required, must not be empty string.
- `has_header` Set to `True` for CSV with Header, `bool` type, optional, defaults to `True`.
- `separator` Separator character of the CSV data, `str` type, optional, defaults to `','`, must not be empty string.
- `quote` Quote character of the CSV data, `str` type, optional, defaults to `'"'`, must not be empty string.
- `skipInitialSpace` Set to `True` to ignore empty blank whitespace at the start of the CSV file, `bool` type, optional, defaults to `False` since is not technically valid.

**Returns:**
Data from the CSV as HTML Table, `str` type, raw HTML (no style at all).

</details>


# csv2htmlfile()
<details>

**Description:**
Takes a path of a CSV file string, process CSV and returns the data rendered on HTML Table.

**Arguments:**
- `csv_file_path` path of the CSV file, `str` type, required, must not be empty string.
- `csv_file_path` path of the HTML file, `str` type, required, must not be empty string.
- `has_header` Set to `True` for CSV with Header, `bool` type, optional, defaults to `True`.
- `separator` Separator character of the CSV data, `str` type, optional, defaults to `','`, must not be empty string.
- `quote` Quote character of the CSV data, `str` type, optional, defaults to `'"'`, must not be empty string.
- `skipInitialSpace` Set to `True` to ignore empty blank whitespace at the start of the CSV file, `bool` type, optional, defaults to `False` since is not technically valid.

**Returns:**
Data from the CSV as HTML Table, `str` type, [human-friendly, ready for display (basic style so is usable).](http://htmlpreview.github.io/?https://raw.githubusercontent.com/juancarlospaco/faster-than-csv/master/example/sample.html)

</details>


# csv2tsv()
<details>

**Description:**
Takes a path of a CSV file string, process CSV and returns a TSV.

**Arguments:**
- `csv_file_path` path of the CSV file, `str` type, required, must not be empty string.
- `has_header` Set to `True` for CSV with Header, `bool` type, optional, defaults to `True`.
- `separator` Separator character of the CSV data, `str` type, optional, defaults to `','`, must not be empty string.
- `quote` Quote character of the CSV data, `str` type, optional, defaults to `'"'`, must not be empty string.
- `skipInitialSpace` Set to `True` to ignore empty blank whitespace at the start of the CSV file, `bool` type, optional, defaults to `False` since is not technically valid.

**Returns:**
Data from the CSV as TSV, `str` type.

</details>


# csv2custom()
<details>

**Description:**
Takes a path of a CSV file string, process CSV and returns the data rendered as Custom formatted values.

**Arguments:**
- `csv_file_path` path of the CSV file, `str` type, required, must not be empty string.
- `has_header` Set to `True` for CSV with Header, `bool` type, optional, defaults to `True`.
- `separator` Separator character of the CSV data, `str` type, optional, defaults to `','`, must not be empty string.
- `quote` Quote character of the CSV data, `str` type, optional, defaults to `'"'`, must not be empty string.
- `skipInitialSpace` Set to `True` to ignore empty blank whitespace at the start of the CSV file, `bool` type, optional, defaults to `False` since is not technically valid.

Examples:

- `csv2custom(separator="💩")` :arrow_right: Poo Separated Values.

**Returns:**
Data from the CSV as Custom formatted values, `str` type.

</details>


[**For more Examples check the Examples and Tests.**](https://github.com/juancarlospaco/faster-than-csv/blob/master/examples/example.py)

Instead of having a pair of functions with a lot of arguments that you should provide to make it work,
we have tiny functions with very few arguments that do one thing and do it as fast as possible.


# Install

- `pip install faster_than_csv`


# Docker

- Make a quick test drive on Docker!.

```bash
$ ./build-docker.sh
$ ./run-docker.sh
$ ./run-benchmark.sh  # Inside Docker.
```


# Dependencies

- **None**


# Platforms

- ✅ Linux
- ✅ Windows
- ✅ Mac
- ✅ Android
- ✅ Raspberry Pi
- ✅ BSD
- ✅ ReactOS


# Requisites

- Python 3.
- GCC.
- 64 Bit.


# FAQ

- Whats the idea, inspiration, reason, etc ?.

[Feel free to Fork, Clone, Download, Improve, Reimplement, Play with this Open Source. Make it 10 times faster, 10 times smaller.](http://tonsky.me/blog/disenchantment)

- This requires Cython ?.

No.

- This runs on PyPy ?.

No.

- This runs on Python2 ?.

I dunno. (Not supported)

- Developer Documentation ?.

[Yes.](https://github.com/juancarlospaco/faster-than-csv/raw/master/faster_than_csv_DOCS.zip)
(Zip because GitHub marks the Repo as being JavaScript)

- How can I Install it ?.

https://github.com/juancarlospaco/faster-than-csv/releases

If you dont understand how to install it, you can just download, extract, put the files on the same folder as your `*.py` file and you are good to go.

- How can be faster than NumPy ?.

I dunno.

- How can be faster than Pandas ?.

I dunno.

- Why needs 64Bit ?.

Maybe it works on 32Bit, but is not supported, integer sizes are too small, and performance can be worse.

- Why needs Python 3 ?.

Maybe it works on Python 2, but is not supported, and performance can be worse, we suggest to migrate to Python3.

- Can I wrap the functions on a `try: except:` block ?.

Functions do not have internal `try: except:` blocks,
so you can wrap them inside `try: except:` blocks if you need very resilient code.

- PIP fails to install or fails build the wheel ?.

Add at the end of the PIP install command:

` --isolated --disable-pip-version-check --no-cache-dir --no-binary :all: `

Not my Bug.

- How to Build the project ?.

`build.sh`

- How to Package the project ?.

`package.sh`

- This requires Nimble ?.

No.

- Whats the unit of measurement for speed ?.

Unmmodified raw output of Python `timeit` module.

Please send Pull Request to Python to improve the output of `timeit`.
