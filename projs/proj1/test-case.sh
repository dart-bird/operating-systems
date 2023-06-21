#!/bin/sh
echo ""
echo "[기본 명령 검증]"
echo "tsh> grep int tsh.c"
grep int tsh.c
echo "tsh> grep \"if.*NULL\" tsh.c &"
grep "if.*NULL" tsh.c &
echo "tsh> ps"
ps

echo ""
echo "[표준 입출력 리다이렉션 검증]"
echo "tsh> grep \"int \" < tsh.c"
grep "int " < tsh.c
echo "tsh> ls -l"
ls -l
echo "tsh> ls -l > delme"
ls -l > delme
echo "tsh> cat delme"
cat delme
echo "tsh> sort < delme > delme2"
sort < delme > delme2
echo "tsh> cat delme2"
cat delme2

echo ""
echo "[파이프 검증]"
echo "tsh> ps -A | grep -i system"
ps -A | grep -i system
echo "tsh> ps -A | grep -i system | awk '{print \$1,\$4}'"
ps -A | grep -i system | awk '{print $1,$4}'
echo "tsh> cat tsh.c | head -6 | tail -5 | head -1"
cat tsh.c | head -6 | tail -5 | head -1

echo ""
echo "[조합한 명령어 검증]"
echo "tsh> sort < tsh.c | grep \"int \" | awk '{print \$1,\$2}' > delme3"
sort < tsh.c | grep "int " | awk '{print $1,$2}' > delme3