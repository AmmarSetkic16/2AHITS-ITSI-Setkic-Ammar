## Arbeitsbericht vom 13.05.2026

Name: Ammar Setkic
Klasse: 2AHITS
Gruppe: 2
Fach: ITSI-Übung

```sh
gdb ./pwcheck
b main
run
disas main
x/16xb  0x0000556ab57471c8
set {unsigned char}0x0000556ab57471c8 = 0x90
set {unsigned char}0x0000556ab57471c9 = 0x90
set {unsigned char}0x0000556ab57471cA = 0x90
set {unsigned char}0x0000556ab57471cB = 0x90
set {unsigned char}0x0000556ab57471cC = 0x90
set {unsigned char}0x0000556ab57471cD = 0x90
```


## Übung (add -> sub)

```sh
hexedit pwcheck
13d2: 01 ca add %ecx,%edx 13fe: 01 ca add %ecx,%edxq 1421: 01 
ca add %ecx,%edx
```

## Übung (je -> jne)
```sh
jne = 0x85
gdb ./pwcheck
b main
run
disas main
x/6xb 0x000055e3373751c8 
set {unsigned char}0x000055e3373751c9 = 0x85
```
