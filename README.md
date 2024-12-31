# RCON

An implementation of the source [RCON protocol](https://developer.valvesoftware.com/wiki/Source_RCON_Protocol). No extra dependencies.

## Download

Download the latest version in release // TODO:

## How do I use it?

As a command line tool
```bash
$ ./rcon --help
$ ./rcon --version
$ ./rcon --ip=11.22.33.44 --port=27016 --passwd=abc --cmd="echo hello" 
```
As an shell/REPL
```bash
$ ./rcon --repl
> !echo hello
> !exit
```

As an SDK
```c
#include <rcon.h>

int main()
{
    // TODO:
}
```

## Development

### Compile Your Own

`make` 

### Test

`make test`