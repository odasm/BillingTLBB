# TLBB.Billing

## Installation

### Normal users

- You can download executable binary in Release
- Import Sql file in `db` to your database (Must choose only one)

### Developers

- Install CMake (>=2.8)
- Install C++ compiler that support C++11 (Clang>=3.3 / GCC=>4.8 / VS >= 2012 / Msys2 GCC||Clang)
- Clone this repository to your computer
- Use CMake to parse the `CMakeLists.txt` to your compiler
- Compile it!

## Usage

Open `Config.ini` to configure the info
You can use one `Billing(.exe)` to open/stop itself

### In Linux

- To Open:
```
chmod +x Billing
./Billing
```

- To Stop:
```
./Billing stop
```

## Packet research

### Ping

- String:

```
Ue      127.0.0.1U
```

- Hex

```
AA550011A0000300000065093132372E302E302E3155AA
```

*Some time it send* `A1`

### Login:

- Raw data

```
adfadfadf
111111
```

- String:

```
192.168.0.17200000005f4dafd8ff40a6bc690b1d2b75be9e6#80F41BB2-D5A83B53-324ABAA4-6D367B8DU
```

- Hex:

```
AA55008EA20002096164666164666164662065336365623538383161306131666461616430313239366437353534383638640D3139322E3136382E302E313732000130303030303000000000000030356634646166643866663430613662633639306231643262373562653965362338304634314242322D44354138334235332D33323441424141342D364433363742384455AA
```

- Hex Arr:

```
AA 55 00 8E A2 00 02 09 61 64 66 61 64 66 61 64 66 20 65 33 63 65 62 35 38 38 31 61 30 61 31 66 64 61 61 64 30 31 32 39 36 64 37 35 35 34 38 36 38 64 0D 31 39 32 2E 31 36 38 2E 30 2E 31 37 32 00 01 30 30 30 30 30 30 00 00 00 00 00 00 30 35 66 34 64 61 66 64 38 66 66 34 30 61 36 62 63 36 39 30 62 31 64 32 62 37 35 62 65 39 65 36 23 38 30 46 34 31 42 42 32 2D 44 35 41 38 33 42 35 33 2D 33 32 34 41 42 41 41 34 2D 36 44 33 36 37 42 38 44 55 AA
```

- Next ----

```
AA550086A2000201312063346361343233386130623932333832306463633530396136663735383439620D3139322E3136382E302E313530000130303030303000000000000038653963636134393530666534653265336461363539323736396233663033372343394146324136372D35453938423132412D33333637303642332D363344333044453155AA
```
