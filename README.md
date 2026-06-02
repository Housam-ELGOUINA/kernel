# KFS_1 Starter

This starter follows the mandatory requirements:
- GRUB-compatible Multiboot header
- ASM entry point
- C++ kernel
- Custom linker script
- Displays `42` on VGA text mode screen

## Build

```bash
make
```

## Create ISO (example)

```bash
mkdir -p iso/boot/grub
cp kernel.bin iso/boot/
echo 'menuentry "KFS" { multiboot /boot/kernel.bin }' > iso/boot/grub/grub.cfg
grub-mkrescue -o kfs.iso iso
```

## Run

```bash
qemu-system-i386 -cdrom kfs.iso
```

## GitHub

```bash
git init
git add .
git commit -m "Initial KFS_1 kernel"
git branch -M main
git remote add origin https://github.com/YOUR_USERNAME/kfs1.git
git push -u origin main
```
