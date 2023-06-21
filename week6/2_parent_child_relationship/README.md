[    0.000000] Linux version 5.5.13 (root@os-VirtualBox) (gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1~18.04)) #3 SMP Fri Mar 17 01:46:58 KST 2023
[    0.000000] Command line: BOOT_IMAGE=/boot/vmlinuz-5.5.13 root=UUID=1cb9f287-9530-45e2-84a1-218615c1b794 ro quiet splash
[    0.000000] KERNEL supported cpus:
[    0.000000]   Intel GenuineIntel
[    0.000000]   AMD AuthenticAMD
[    0.000000]   Hygon HygonGenuine
[    0.000000]   Centaur CentaurHauls
[    0.000000]   zhaoxin   Shanghai  
[    0.000000] x86/fpu: x87 FPU will use FXSAVE
[    0.000000] BIOS-provided physical RAM map:
[    0.000000] BIOS-e820: [mem 0x0000000000000000-0x000000000009fbff] usable
[    0.000000] BIOS-e820: [mem 0x000000000009fc00-0x000000000009ffff] reserved
[    0.000000] BIOS-e820: [mem 0x00000000000f0000-0x00000000000fffff] reserved
[    0.000000] BIOS-e820: [mem 0x0000000000100000-0x00000000dffeffff] usable
[    0.000000] BIOS-e820: [mem 0x00000000dfff0000-0x00000000dfffffff] ACPI data
[    0.000000] BIOS-e820: [mem 0x00000000fec00000-0x00000000fec00fff] reserved
[    0.000000] BIOS-e820: [mem 0x00000000fee00000-0x00000000fee00fff] reserved
[    0.000000] BIOS-e820: [mem 0x00000000fffc0000-0x00000000ffffffff] reserved
[    0.000000] BIOS-e820: [mem 0x0000000100000000-0x0000000219ffffff] usable
[    0.000000] NX (Execute Disable) protection: active
[    0.000000] SMBIOS 2.5 present.
[    0.000000] DMI: innotek GmbH VirtualBox/VirtualBox, BIOS VirtualBox 12/01/2006
[    0.000000] Hypervisor detected: KVM
[    0.000000] kvm-clock: Using msrs 4b564d01 and 4b564d00
[    0.000000] kvm-clock: cpu 0, msr 13e601001, primary cpu clock
[    0.000001] kvm-clock: using sched offset of 19787686278 cycles
[    0.000002] clocksource: kvm-clock: mask: 0xffffffffffffffff max_cycles: 0x1cd42e4dffb, max_idle_ns: 881590591483 ns
[    0.000004] tsc: Detected 3600.010 MHz processor
[    0.006312] e820: update [mem 0x00000000-0x00000fff] usable ==> reserved
[    0.006314] e820: remove [mem 0x000a0000-0x000fffff] usable
[    0.006318] last_pfn = 0x21a000 max_arch_pfn = 0x400000000
[    0.006384] MTRR default type: uncachable
[    0.006385] MTRR fixed ranges disabled:
[    0.006386]   00000-FFFFF uncachable
[    0.006386] MTRR variable ranges disabled:
[    0.006387]   0 disabled
[    0.006387]   1 disabled
[    0.006388]   2 disabled
[    0.006388]   3 disabled
[    0.006388]   4 disabled
[    0.006388]   5 disabled
[    0.006389]   6 disabled
[    0.006389]   7 disabled
[    0.006393] Disabled
[    0.006394] x86/PAT: MTRRs disabled, skipping PAT initialization too.
[    0.006398] CPU MTRRs all blank - virtualized system.
[    0.006399] x86/PAT: Configuration [0-7]: WB  WT  UC- UC  WB  WT  UC- UC  
[    0.006402] last_pfn = 0xdfff0 max_arch_pfn = 0x400000000
[    0.006460] found SMP MP-table at [mem 0x0009fff0-0x0009ffff]
[    0.035224] check: Scanning 1 areas for low memory corruption
[    0.035266] BRK [0x13e801000, 0x13e801fff] PGTABLE
[    0.035268] BRK [0x13e802000, 0x13e802fff] PGTABLE
[    0.035268] BRK [0x13e803000, 0x13e803fff] PGTABLE
[    0.035281] BRK [0x13e804000, 0x13e804fff] PGTABLE
[    0.035282] BRK [0x13e805000, 0x13e805fff] PGTABLE
[    0.035304] BRK [0x13e806000, 0x13e806fff] PGTABLE
[    0.035324] BRK [0x13e807000, 0x13e807fff] PGTABLE
[    0.035331] BRK [0x13e808000, 0x13e808fff] PGTABLE
[    0.035337] BRK [0x13e809000, 0x13e809fff] PGTABLE
[    0.035348] BRK [0x13e80a000, 0x13e80afff] PGTABLE
[    0.035432] RAMDISK: [mem 0x1ca1d000-0x37feefff]
[    0.035469] ACPI: Early table checksum verification disabled
[    0.035473] ACPI: RSDP 0x00000000000E0000 000024 (v02 VBOX  )
[    0.035476] ACPI: XSDT 0x00000000DFFF0030 00003C (v01 VBOX   VBOXXSDT 00000001 ASL  00000061)
[    0.035480] ACPI: FACP 0x00000000DFFF00F0 0000F4 (v04 VBOX   VBOXFACP 00000001 ASL  00000061)
[    0.035484] ACPI: DSDT 0x00000000DFFF0630 002353 (v02 VBOX   VBOXBIOS 00000002 INTL 20100528)
[    0.035486] ACPI: FACS 0x00000000DFFF0200 000040
[    0.035488] ACPI: FACS 0x00000000DFFF0200 000040
[    0.035490] ACPI: APIC 0x00000000DFFF0240 00007C (v02 VBOX   VBOXAPIC 00000001 ASL  00000061)
[    0.035493] ACPI: SSDT 0x00000000DFFF02C0 00036C (v01 VBOX   VBOXCPUT 00000002 INTL 20100528)
[    0.035499] ACPI: Local APIC address 0xfee00000
[    0.036726] No NUMA configuration found
[    0.036728] Faking a node at [mem 0x0000000000000000-0x0000000219ffffff]
[    0.036735] NODE_DATA(0) allocated [mem 0x219fd2000-0x219ffcfff]
[    0.037625] Zone ranges:
[    0.037626]   DMA      [mem 0x0000000000001000-0x0000000000ffffff]
[    0.037642]   DMA32    [mem 0x0000000001000000-0x00000000ffffffff]
[    0.037643]   Normal   [mem 0x0000000100000000-0x0000000219ffffff]
[    0.037643]   Device   empty
[    0.037644] Movable zone start for each node
[    0.037646] Early memory node ranges
[    0.037646]   node   0: [mem 0x0000000000001000-0x000000000009efff]
[    0.037647]   node   0: [mem 0x0000000000100000-0x00000000dffeffff]
[    0.037647]   node   0: [mem 0x0000000100000000-0x0000000219ffffff]
[    0.043197] Zeroed struct page in unavailable ranges: 24690 pages
[    0.043200] Initmem setup node 0 [mem 0x0000000000001000-0x0000000219ffffff]
[    0.043201] On node 0 totalpages: 2072462
[    0.043203]   DMA zone: 64 pages used for memmap
[    0.043203]   DMA zone: 21 pages reserved
[    0.043203]   DMA zone: 3998 pages, LIFO batch:0
[    0.043972]   DMA32 zone: 14272 pages used for memmap
[    0.043973]   DMA32 zone: 913392 pages, LIFO batch:63
[    0.228802]   Normal zone: 18048 pages used for memmap
[    0.228803]   Normal zone: 1155072 pages, LIFO batch:63
[    0.444671] ACPI: PM-Timer IO Port: 0x4008
[    0.444674] ACPI: Local APIC address 0xfee00000
[    0.444968] IOAPIC[0]: apic_id 6, version 32, address 0xfec00000, GSI 0-23
[    0.444972] ACPI: INT_SRC_OVR (bus 0 bus_irq 0 global_irq 2 dfl dfl)
[    0.444973] ACPI: INT_SRC_OVR (bus 0 bus_irq 9 global_irq 9 low level)
[    0.444974] ACPI: IRQ0 used by override.
[    0.444975] ACPI: IRQ9 used by override.
[    0.444976] Using ACPI (MADT) for SMP configuration information
[    0.445007] smpboot: Allowing 6 CPUs, 0 hotplug CPUs
[    0.445121] PM: Registered nosave memory: [mem 0x00000000-0x00000fff]
[    0.445122] PM: Registered nosave memory: [mem 0x0009f000-0x0009ffff]
[    0.445122] PM: Registered nosave memory: [mem 0x000a0000-0x000effff]
[    0.445123] PM: Registered nosave memory: [mem 0x000f0000-0x000fffff]
[    0.445123] PM: Registered nosave memory: [mem 0xdfff0000-0xdfffffff]
[    0.445124] PM: Registered nosave memory: [mem 0xe0000000-0xfebfffff]
[    0.445132] PM: Registered nosave memory: [mem 0xfec00000-0xfec00fff]
[    0.445132] PM: Registered nosave memory: [mem 0xfec01000-0xfedfffff]
[    0.445133] PM: Registered nosave memory: [mem 0xfee00000-0xfee00fff]
[    0.445133] PM: Registered nosave memory: [mem 0xfee01000-0xfffbffff]
[    0.445133] PM: Registered nosave memory: [mem 0xfffc0000-0xffffffff]
[    0.445134] [mem 0xe0000000-0xfebfffff] available for PCI devices
[    0.445135] Booting paravirtualized kernel on KVM
[    0.445137] clocksource: refined-jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 7645519600211568 ns
[    0.445140] setup_percpu: NR_CPUS:8192 nr_cpumask_bits:6 nr_cpu_ids:6 nr_node_ids:1
[    0.451082] percpu: Embedded 57 pages/cpu s196608 r8192 d28672 u262144
[    0.451086] pcpu-alloc: s196608 r8192 d28672 u262144 alloc=1*2097152
[    0.451087] pcpu-alloc: [0] 0 1 2 3 4 5 - - 
[    0.451179] PV qspinlock hash table entries: 256 (order: 0, 4096 bytes, linear)
[    0.451197] Built 1 zonelists, mobility grouping on.  Total pages: 2040057
[    0.451198] Policy zone: Normal
[    0.451199] Kernel command line: BOOT_IMAGE=/boot/vmlinuz-5.5.13 root=UUID=1cb9f287-9530-45e2-84a1-218615c1b794 ro quiet splash
[    0.474835] Dentry cache hash table entries: 1048576 (order: 11, 8388608 bytes, linear)
[    0.486639] Inode-cache hash table entries: 524288 (order: 10, 4194304 bytes, linear)
[    0.486738] mem auto-init: stack:off, heap alloc:on, heap free:off
[    0.588516] Memory: 7593632K/8289848K available (14339K kernel code, 2390K rwdata, 5108K rodata, 2664K init, 4612K bss, 696216K reserved, 0K cma-reserved)
[    0.589229] SLUB: HWalign=64, Order=0-3, MinObjects=0, CPUs=6, Nodes=1
[    0.589301] ftrace: allocating 44284 entries in 173 pages
[    0.602226] ftrace: allocated 173 pages with 5 groups
[    0.603179] rcu: Hierarchical RCU implementation.
[    0.603180] rcu: 	RCU restricting CPUs from NR_CPUS=8192 to nr_cpu_ids=6.
[    0.603181] 	Tasks RCU enabled.
[    0.603182] rcu: RCU calculated value of scheduler-enlistment delay is 25 jiffies.
[    0.603182] rcu: Adjusting geometry for rcu_fanout_leaf=16, nr_cpu_ids=6
[    0.605885] NR_IRQS: 524544, nr_irqs: 472, preallocated irqs: 16
[    0.606685] random: crng done (trusting CPU's manufacturer)
[    0.655149] Console: colour VGA+ 80x25
[    0.655152] printk: console [tty0] enabled
[    0.655210] ACPI: Core revision 20191018
[    0.655645] APIC: Switch to symmetric I/O mode setup
[    0.671348] ..TIMER: vector=0x30 apic1=0 pin1=2 apic2=-1 pin2=-1
[    0.671571] clocksource: tsc-early: mask: 0xffffffffffffffff max_cycles: 0x33e45cd82d3, max_idle_ns: 440795345741 ns
[    0.671576] Calibrating delay loop (skipped) preset value.. 7200.02 BogoMIPS (lpj=14400040)
[    0.671577] pid_max: default: 32768 minimum: 301
[    0.671672] LSM: Security Framework initializing
[    0.671698] Yama: becoming mindful.
[    0.671811] AppArmor: AppArmor initialized
[    0.672310] Mount-cache hash table entries: 16384 (order: 5, 131072 bytes, linear)
[    0.672750] Mountpoint-cache hash table entries: 16384 (order: 5, 131072 bytes, linear)
[    0.672818] *** VALIDATE tmpfs ***
[    0.673234] *** VALIDATE proc ***
[    0.673346] *** VALIDATE cgroup1 ***
[    0.673346] *** VALIDATE cgroup2 ***
[    0.674624] Last level iTLB entries: 4KB 128, 2MB 8, 4MB 8
[    0.674625] Last level dTLB entries: 4KB 64, 2MB 0, 4MB 0, 1GB 4
[    0.674628] Spectre V1 : Mitigation: usercopy/swapgs barriers and __user pointer sanitization
[    0.674629] Spectre V2 : Mitigation: Full generic retpoline
[    0.674629] Spectre V2 : Spectre v2 / SpectreRSB mitigation: Filling RSB on context switch
[    0.674629] Speculative Store Bypass: Vulnerable
[    0.674631] MDS: Mitigation: Clear CPU buffers
[    0.674777] Freeing SMP alternatives memory: 40K
[    0.800279] APIC calibration not consistent with PM-Timer: 104ms instead of 100ms
[    0.800280] APIC delta adjusted to PM-Timer: 6446273 (6752313)
[    0.800602] smpboot: CPU0: Intel(R) Core(TM) i7-9700K CPU @ 3.60GHz (family: 0x6, model: 0x9e, stepping: 0xc)
[    0.801184] Performance Events: unsupported p6 CPU model 158 no PMU driver, software events only.
[    0.801255] rcu: Hierarchical SRCU implementation.
[    0.801977] NMI watchdog: Perf NMI watchdog permanently disabled
[    0.802576] smp: Bringing up secondary CPUs ...
[    0.803174] x86: Booting SMP configuration:
[    0.803174] .... node  #0, CPUs:      #1
[    0.069065] kvm-clock: cpu 1, msr 13e601041, secondary cpu clock
[    0.806531] TSC synchronization [CPU#0 -> CPU#1]:
[    0.806532] Measured 84135 cycles TSC warp between CPUs, turning off TSC clock.
[    0.806533] tsc: Marking TSC unstable due to check_tsc_sync_source failed
[    0.808521]  #2
[    0.069065] kvm-clock: cpu 2, msr 13e601081, secondary cpu clock
[    0.811999]  #3
[    0.069065] kvm-clock: cpu 3, msr 13e6010c1, secondary cpu clock
[    0.814846]  #4
[    0.069065] kvm-clock: cpu 4, msr 13e601101, secondary cpu clock
[    0.818616]  #5
[    0.069065] kvm-clock: cpu 5, msr 13e601141, secondary cpu clock
[    0.827727] smp: Brought up 1 node, 6 CPUs
[    0.827728] smpboot: Max logical packages: 1
[    0.827729] smpboot: Total of 6 processors activated (43200.12 BogoMIPS)
[    0.828261] devtmpfs: initialized
[    0.828261] x86/mm: Memory block size: 128MB
[    0.831911] clocksource: jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 7645041785100000 ns
[    0.832130] futex hash table entries: 2048 (order: 5, 131072 bytes, linear)
[    0.833109] pinctrl core: initialized pinctrl subsystem
[    0.833547] PM: RTC time: 08:12:13, date: 2023-04-05
[    0.833548] thermal_sys: Registered thermal governor 'fair_share'
[    0.833548] thermal_sys: Registered thermal governor 'bang_bang'
[    0.833549] thermal_sys: Registered thermal governor 'step_wise'
[    0.833549] thermal_sys: Registered thermal governor 'user_space'
[    0.838182] NET: Registered protocol family 16
[    0.838299] audit: initializing netlink subsys (disabled)
[    0.838457] audit: type=2000 audit(1680682355.203:1): state=initialized audit_enabled=0 res=1
[    0.838457] EISA bus registered
[    0.838457] cpuidle: using governor ladder
[    0.838457] cpuidle: using governor menu
[    0.838457] ACPI: bus type PCI registered
[    0.838457] acpiphp: ACPI Hot Plug PCI Controller Driver version: 0.5
[    0.838457] PCI: Using configuration type 1 for base access
[    0.840247] HugeTLB registered 2.00 MiB page size, pre-allocated 0 pages
[    0.891591] ACPI: Added _OSI(Module Device)
[    0.891591] ACPI: Added _OSI(Processor Device)
[    0.891592] ACPI: Added _OSI(3.0 _SCP Extensions)
[    0.891592] ACPI: Added _OSI(Processor Aggregator Device)
[    0.891593] ACPI: Added _OSI(Linux-Dell-Video)
[    0.891593] ACPI: Added _OSI(Linux-Lenovo-NV-HDMI-Audio)
[    0.891594] ACPI: Added _OSI(Linux-HPI-Hybrid-Graphics)
[    0.893890] ACPI: 2 ACPI AML tables successfully acquired and loaded
[    0.895573] ACPI: Interpreter enabled
[    0.895573] ACPI: (supports S0 S5)
[    0.895573] ACPI: Using IOAPIC for interrupt routing
[    0.895594] PCI: Using host bridge windows from ACPI; if necessary, use "pci=nocrs" and report a bug
[    0.895732] ACPI: Enabled 2 GPEs in block 00 to 07
[    0.902767] ACPI: PCI Root Bridge [PCI0] (domain 0000 [bus 00-ff])
[    0.902770] acpi PNP0A03:00: _OSC: OS supports [ASPM ClockPM Segments MSI HPX-Type3]
[    0.903442] acpi PNP0A03:00: _OSC: not requesting OS control; OS requires [ExtendedConfig ASPM ClockPM MSI]
[    0.903449] acpi PNP0A03:00: fail to add MMCONFIG information, can't access extended PCI configuration space under this bridge.
[    0.903573] PCI host bridge to bus 0000:00
[    0.903573] pci_bus 0000:00: root bus resource [io  0x0000-0x0cf7 window]
[    0.903573] pci_bus 0000:00: root bus resource [io  0x0d00-0xffff window]
[    0.903573] pci_bus 0000:00: root bus resource [mem 0x000a0000-0x000bffff window]
[    0.903573] pci_bus 0000:00: root bus resource [mem 0xe0000000-0xfdffffff window]
[    0.903573] pci_bus 0000:00: root bus resource [bus 00-ff]
[    0.903573] pci 0000:00:00.0: [8086:1237] type 00 class 0x060000
[    0.907573] pci 0000:00:01.0: [8086:7000] type 00 class 0x060100
[    0.908919] pci 0000:00:01.1: [8086:7111] type 00 class 0x01018a
[    0.910327] pci 0000:00:01.1: reg 0x20: [io  0xd000-0xd00f]
[    0.910804] pci 0000:00:01.1: legacy IDE quirk: reg 0x10: [io  0x01f0-0x01f7]
[    0.910805] pci 0000:00:01.1: legacy IDE quirk: reg 0x14: [io  0x03f6]
[    0.910806] pci 0000:00:01.1: legacy IDE quirk: reg 0x18: [io  0x0170-0x0177]
[    0.910806] pci 0000:00:01.1: legacy IDE quirk: reg 0x1c: [io  0x0376]
[    0.913777] pci 0000:00:02.0: [15ad:0405] type 00 class 0x030000
[    0.915024] pci 0000:00:02.0: reg 0x10: [io  0xd010-0xd01f]
[    0.915573] pci 0000:00:02.0: reg 0x14: [mem 0xe0000000-0xe0ffffff pref]
[    0.915848] pci 0000:00:02.0: reg 0x18: [mem 0xf0000000-0xf01fffff]
[    0.924595] pci 0000:00:03.0: [8086:100e] type 00 class 0x020000
[    0.925157] pci 0000:00:03.0: reg 0x10: [mem 0xf0200000-0xf021ffff]
[    0.925632] pci 0000:00:03.0: reg 0x18: [io  0xd020-0xd027]
[    0.930168] pci 0000:00:04.0: [80ee:cafe] type 00 class 0x088000
[    0.930956] pci 0000:00:04.0: reg 0x10: [io  0xd040-0xd05f]
[    0.931387] pci 0000:00:04.0: reg 0x14: [mem 0xf0400000-0xf07fffff]
[    0.931573] pci 0000:00:04.0: reg 0x18: [mem 0xf0800000-0xf0803fff pref]
[    0.938062] pci 0000:00:05.0: [8086:2415] type 00 class 0x040100
[    0.938591] pci 0000:00:05.0: reg 0x10: [io  0xd100-0xd1ff]
[    0.938790] pci 0000:00:05.0: reg 0x14: [io  0xd200-0xd23f]
[    0.942450] pci 0000:00:06.0: [106b:003f] type 00 class 0x0c0310
[    0.942986] pci 0000:00:06.0: reg 0x10: [mem 0xf0804000-0xf0804fff]
[    0.947573] pci 0000:00:07.0: [8086:7113] type 00 class 0x068000
[    0.947573] pci 0000:00:07.0: quirk: [io  0x4000-0x403f] claimed by PIIX4 ACPI
[    0.947576] pci 0000:00:07.0: quirk: [io  0x4100-0x410f] claimed by PIIX4 SMB
[    0.961914] pci 0000:00:0b.0: [8086:265c] type 00 class 0x0c0320
[    0.962388] pci 0000:00:0b.0: reg 0x10: [mem 0xf0805000-0xf0805fff]
[    0.969926] pci 0000:00:0d.0: [8086:2829] type 00 class 0x010601
[    0.970476] pci 0000:00:0d.0: reg 0x10: [io  0xd240-0xd247]
[    0.970724] pci 0000:00:0d.0: reg 0x14: [io  0xd248-0xd24b]
[    0.970951] pci 0000:00:0d.0: reg 0x18: [io  0xd250-0xd257]
[    0.971177] pci 0000:00:0d.0: reg 0x1c: [io  0xd258-0xd25b]
[    0.971429] pci 0000:00:0d.0: reg 0x20: [io  0xd260-0xd26f]
[    0.971573] pci 0000:00:0d.0: reg 0x24: [mem 0xf0806000-0xf0807fff]
[    1.028273] ACPI: PCI Interrupt Link [LNKA] (IRQs 5 9 10 *11)
[    1.028854] ACPI: PCI Interrupt Link [LNKB] (IRQs 5 9 *10 11)
[    1.029035] ACPI: PCI Interrupt Link [LNKC] (IRQs 5 *9 10 11)
[    1.029215] ACPI: PCI Interrupt Link [LNKD] (IRQs 5 9 10 *11)
[    1.032020] iommu: Default domain type: Translated 
[    1.032020] pci 0000:00:02.0: vgaarb: setting as boot VGA device
[    1.032020] pci 0000:00:02.0: vgaarb: VGA device added: decodes=io+mem,owns=io+mem,locks=none
[    1.032020] pci 0000:00:02.0: vgaarb: bridge control possible
[    1.032020] vgaarb: loaded
[    1.032020] SCSI subsystem initialized
[    1.035741] libata version 3.00 loaded.
[    1.035754] ACPI: bus type USB registered
[    1.035795] usbcore: registered new interface driver usbfs
[    1.035799] usbcore: registered new interface driver hub
[    1.036542] usbcore: registered new device driver usb
[    1.036608] pps_core: LinuxPPS API ver. 1 registered
[    1.036608] pps_core: Software ver. 5.3.6 - Copyright 2005-2007 Rodolfo Giometti <giometti@linux.it>
[    1.036609] PTP clock support registered
[    1.037068] EDAC MC: Ver: 3.0.0
[    1.040458] PCI: Using ACPI for IRQ routing
[    1.040458] PCI: pci_cache_line_size set to 64 bytes
[    1.040458] e820: reserve RAM buffer [mem 0x0009fc00-0x0009ffff]
[    1.040458] e820: reserve RAM buffer [mem 0xdfff0000-0xdfffffff]
[    1.040458] e820: reserve RAM buffer [mem 0x21a000000-0x21bffffff]
[    1.040743] NetLabel: Initializing
[    1.040744] NetLabel:  domain hash size = 128
[    1.040744] NetLabel:  protocols = UNLABELED CIPSOv4 CALIPSO
[    1.040853] NetLabel:  unlabeled traffic allowed by default
[    1.046175] clocksource: Switched to clocksource kvm-clock
[    1.095363] *** VALIDATE bpf ***
[    1.096745] VFS: Disk quotas dquot_6.6.0
[    1.096774] VFS: Dquot-cache hash table entries: 512 (order 0, 4096 bytes)
[    1.096805] *** VALIDATE ramfs ***
[    1.096810] *** VALIDATE hugetlbfs ***
[    1.097077] AppArmor: AppArmor Filesystem Enabled
[    1.097127] pnp: PnP ACPI init
[    1.097217] pnp 00:00: Plug and Play ACPI device, IDs PNP0303 (active)
[    1.097285] pnp 00:01: Plug and Play ACPI device, IDs PNP0f03 (active)
[    1.098461] pnp: PnP ACPI: found 2 devices
[    1.137349] clocksource: acpi_pm: mask: 0xffffff max_cycles: 0xffffff, max_idle_ns: 2085701024 ns
[    1.137422] pci_bus 0000:00: resource 4 [io  0x0000-0x0cf7 window]
[    1.137423] pci_bus 0000:00: resource 5 [io  0x0d00-0xffff window]
[    1.137424] pci_bus 0000:00: resource 6 [mem 0x000a0000-0x000bffff window]
[    1.137424] pci_bus 0000:00: resource 7 [mem 0xe0000000-0xfdffffff window]
[    1.137486] NET: Registered protocol family 2
[    1.137944] tcp_listen_portaddr_hash hash table entries: 4096 (order: 4, 65536 bytes, linear)
[    1.139362] TCP established hash table entries: 65536 (order: 7, 524288 bytes, linear)
[    1.142348] TCP bind hash table entries: 65536 (order: 8, 1048576 bytes, linear)
[    1.142389] TCP: Hash tables configured (established 65536 bind 65536)
[    1.143150] UDP hash table entries: 4096 (order: 5, 131072 bytes, linear)
[    1.143501] UDP-Lite hash table entries: 4096 (order: 5, 131072 bytes, linear)
[    1.143933] NET: Registered protocol family 1
[    1.143936] NET: Registered protocol family 44
[    1.143974] pci 0000:00:00.0: Limiting direct PCI/PCI transfers
[    1.144005] pci 0000:00:01.0: Activating ISA DMA hang workarounds
[    1.144150] pci 0000:00:02.0: Video device with shadowed ROM at [mem 0x000c0000-0x000dffff]
[    1.146006] PCI: CLS 0 bytes, default 64
[    1.146006] Trying to unpack rootfs image as initramfs...
[   10.597960] Freeing initrd memory: 448328K
[   10.597964] PCI-DMA: Using software bounce buffering for IO (SWIOTLB)
[   10.597965] software IO TLB: mapped [mem 0xdbff0000-0xdfff0000] (64MB)
[   10.598097] platform rtc_cmos: registered platform RTC device (no PNP device found)
[   10.598128] check: Scanning for low memory corruption every 60 seconds
[   10.603872] Initialise system trusted keyrings
[   10.603885] Key type blacklist registered
[   10.604488] workingset: timestamp_bits=36 max_order=21 bucket_order=0
[   10.607317] zbud: loaded
[   10.608217] squashfs: version 4.0 (2009/01/31) Phillip Lougher
[   10.609265] fuse: init (API version 7.31)
[   10.609295] *** VALIDATE fuse ***
[   10.609296] *** VALIDATE fuse ***
[   10.617494] Platform Keyring initialized
[   10.626131] Key type asymmetric registered
[   10.626132] Asymmetric key parser 'x509' registered
[   10.626144] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 244)
[   10.626857] io scheduler mq-deadline registered
[   10.628999] shpchp: Standard Hot Plug PCI Controller Driver version: 0.4
[   10.629115] intel_idle: Please enable MWAIT in BIOS SETUP
[   10.629347] ACPI: AC Adapter [AC] (on-line)
[   10.629415] input: Power Button as /devices/LNXSYSTM:00/LNXPWRBN:00/input/input0
[   10.629507] ACPI: Power Button [PWRF]
[   10.629696] input: Sleep Button as /devices/LNXSYSTM:00/LNXSLPBN:00/input/input1
[   10.629771] ACPI: Sleep Button [SLPF]
[   10.631439] Serial: 8250/16550 driver, 32 ports, IRQ sharing enabled
[   10.635152] Linux agpgart interface v0.103
[   10.656948] loop: module loaded
[   10.657244] ata_piix 0000:00:01.1: version 2.13
[   10.663077] scsi host0: ata_piix
[   10.664411] scsi host1: ata_piix
[   10.664648] ata1: PATA max UDMA/33 cmd 0x1f0 ctl 0x3f6 bmdma 0xd000 irq 14
[   10.664649] ata2: PATA max UDMA/33 cmd 0x170 ctl 0x376 bmdma 0xd008 irq 15
[   10.664800] libphy: Fixed MDIO Bus: probed
[   10.664801] tun: Universal TUN/TAP device driver, 1.6
[   10.664887] PPP generic driver version 2.4.2
[   10.664967] VFIO - User Level meta-driver version: 0.3
[   10.665688] ehci_hcd: USB 2.0 'Enhanced' Host Controller (EHCI) Driver
[   10.665691] ehci-pci: EHCI PCI platform driver
[   10.667003] ehci-pci 0000:00:0b.0: EHCI Host Controller
[   10.667008] ehci-pci 0000:00:0b.0: new USB bus registered, assigned bus number 1
[   10.668164] ehci-pci 0000:00:0b.0: irq 19, io mem 0xf0805000
[   10.684650] ehci-pci 0000:00:0b.0: USB 2.0 started, EHCI 1.00
[   10.684715] usb usb1: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 5.05
[   10.684716] usb usb1: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[   10.684717] usb usb1: Product: EHCI Host Controller
[   10.684718] usb usb1: Manufacturer: Linux 5.5.13 ehci_hcd
[   10.684719] usb usb1: SerialNumber: 0000:00:0b.0
[   10.684841] hub 1-0:1.0: USB hub found
[   10.684846] hub 1-0:1.0: 12 ports detected
[   10.685584] ehci-platform: EHCI generic platform driver
[   10.685592] ohci_hcd: USB 1.1 'Open' Host Controller (OHCI) Driver
[   10.685595] ohci-pci: OHCI PCI platform driver
[   10.686873] ohci-pci 0000:00:06.0: OHCI PCI host controller
[   10.686877] ohci-pci 0000:00:06.0: new USB bus registered, assigned bus number 2
[   10.687429] ohci-pci 0000:00:06.0: irq 22, io mem 0xf0804000
[   10.754415] usb usb2: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 5.05
[   10.754417] usb usb2: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[   10.754417] usb usb2: Product: OHCI PCI host controller
[   10.754418] usb usb2: Manufacturer: Linux 5.5.13 ohci_hcd
[   10.754419] usb usb2: SerialNumber: 0000:00:06.0
[   10.754526] hub 2-0:1.0: USB hub found
[   10.754588] hub 2-0:1.0: 12 ports detected
[   10.755834] ohci-platform: OHCI generic platform driver
[   10.755843] uhci_hcd: USB Universal Host Controller Interface driver
[   10.756009] i8042: PNP: PS/2 Controller [PNP0303:PS2K,PNP0f03:PS2M] at 0x60,0x64 irq 1,12
[   10.756382] serio: i8042 KBD port at 0x60,0x64 irq 1
[   10.756382] serio: i8042 AUX port at 0x60,0x64 irq 12
[   10.756382] mousedev: PS/2 mouse device common for all mice
[   10.762070] rtc_cmos rtc_cmos: registered as rtc0
[   10.762210] rtc_cmos rtc_cmos: alarms up to one day, 114 bytes nvram
[   10.762215] i2c /dev entries driver
[   10.762265] device-mapper: uevent: version 1.0.3
[   10.763261] input: AT Translated Set 2 keyboard as /devices/platform/i8042/serio0/input/input2
[   10.763813] device-mapper: ioctl: 4.41.0-ioctl (2019-09-16) initialised: dm-devel@redhat.com
[   10.763846] platform eisa.0: Probing EISA bus 0
[   10.763847] platform eisa.0: EISA: Cannot allocate resource for mainboard
[   10.763848] platform eisa.0: Cannot allocate resource for EISA slot 1
[   10.763849] platform eisa.0: Cannot allocate resource for EISA slot 2
[   10.763850] platform eisa.0: Cannot allocate resource for EISA slot 3
[   10.763850] platform eisa.0: Cannot allocate resource for EISA slot 4
[   10.763851] platform eisa.0: Cannot allocate resource for EISA slot 5
[   10.763852] platform eisa.0: Cannot allocate resource for EISA slot 6
[   10.763852] platform eisa.0: Cannot allocate resource for EISA slot 7
[   10.763853] platform eisa.0: Cannot allocate resource for EISA slot 8
[   10.763854] platform eisa.0: EISA: Detected 0 cards
[   10.763855] intel_pstate: CPU model not supported
[   10.765715] ledtrig-cpu: registered to indicate activity on CPUs
[   10.765879] intel_pmc_core intel_pmc_core.0:  initialized
[   10.766321] drop_monitor: Initializing network drop monitor service
[   10.766548] NET: Registered protocol family 10
[   10.786302] Segment Routing with IPv6
[   10.786348] NET: Registered protocol family 17
[   10.786993] Key type dns_resolver registered
[   10.794364] RAS: Correctable Errors collector initialized.
[   10.794367] IPI shorthand broadcast: enabled
[   10.794372] sched_clock: Marking stable (10729111667, 65065816)->(10863579004, -69401521)
[   10.795139] registered taskstats version 1
[   10.795147] Loading compiled-in X.509 certificates
[   10.798462] Loaded X.509 cert 'Build time autogenerated kernel key: 0f976c4a8119b43e9d22f6bee2b112647c732242'
[   10.798861] zswap: loaded using pool lzo/zbud
[   10.804739] Key type ._fscrypt registered
[   10.804740] Key type .fscrypt registered
[   10.818452] Key type big_key registered
[   10.824640] Key type encrypted registered
[   10.824642] AppArmor: AppArmor sha1 policy hashing enabled
[   10.824664] ima: No TPM chip found, activating TPM-bypass!
[   10.824669] ima: Allocated hash algorithm: sha1
[   10.824672] ima: No architecture policies found
[   10.824733] evm: Initialising EVM extended attributes:
[   10.824734] evm: security.selinux
[   10.824734] evm: security.SMACK64
[   10.824734] evm: security.SMACK64EXEC
[   10.824735] evm: security.SMACK64TRANSMUTE
[   10.824735] evm: security.SMACK64MMAP
[   10.824735] evm: security.apparmor
[   10.824735] evm: security.ima
[   10.824736] evm: security.capability
[   10.824736] evm: HMAC attrs: 0x1
[   10.825188] PM:   Magic number: 3:377:219
[   10.854402] rtc_cmos rtc_cmos: setting system clock to 2023-04-05T08:12:23 UTC (1680682343)
[   10.855886] ata2.00: ATAPI: VBOX CD-ROM, 1.0, max UDMA/133
[   10.859766] scsi 1:0:0:0: CD-ROM            VBOX     CD-ROM           1.0  PQ: 0 ANSI: 5
[   10.886435] sr 1:0:0:0: [sr0] scsi3-mmc drive: 32x/32x xa/form2 tray
[   10.886437] cdrom: Uniform CD-ROM driver Revision: 3.20
[   10.886939] sr 1:0:0:0: Attached scsi CD-ROM sr0
[   10.887003] sr 1:0:0:0: Attached scsi generic sg0 type 5
[   10.892098] Freeing unused decrypted memory: 2040K
[   10.895623] Freeing unused kernel image (initmem) memory: 2664K
[   10.900131] Write protecting the kernel read-only data: 22528k
[   10.903349] Freeing unused kernel image (text/rodata gap) memory: 2044K
[   10.904215] Freeing unused kernel image (rodata/data gap) memory: 1036K
[   10.909942] x86/mm: Checked W+X mappings: passed, no W+X pages found.
[   10.909945] Run /init as init process
[   11.037978] ahci 0000:00:0d.0: version 3.0
[   11.038164] piix4_smbus 0000:00:07.0: SMBus Host Controller at 0x4100, revision 0
[   11.041864] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
[   11.041865] e1000: Copyright (c) 1999-2006 Intel Corporation.
[   11.054165] ahci 0000:00:0d.0: SSS flag set, parallel bus scan disabled
[   11.054959] ahci 0000:00:0d.0: AHCI 0001.0100 32 slots 1 ports 3 Gbps 0x1 impl SATA mode
[   11.054961] ahci 0000:00:0d.0: flags: 64bit ncq stag only ccc 
[   11.056567] ACPI: Video Device [GFX0] (multi-head: yes  rom: no  post: no)
[   11.056648] input: Video Bus as /devices/LNXSYSTM:00/LNXSYBUS:00/PNP0A03:00/LNXVIDEO:00/input/input4
[   11.057862] scsi host2: ahci
[   11.057961] ata3: SATA max UDMA/133 abar m8192@0xf0806000 port 0xf0806100 irq 21
[   11.243714] usb 2-1: new full-speed USB device number 2 using ohci-pci
[   11.343836] input: ImExPS/2 Generic Explorer Mouse as /devices/platform/i8042/serio1/input/input5
[   11.404454] ata3: SATA link up 3.0 Gbps (SStatus 123 SControl 300)
[   11.404911] ata3.00: ATA-6: VBOX HARDDISK, 1.0, max UDMA/133
[   11.404912] ata3.00: 104857600 sectors, multi 128: LBA48 NCQ (depth 32)
[   11.405675] ata3.00: configured for UDMA/133
[   11.405873] scsi 2:0:0:0: Direct-Access     ATA      VBOX HARDDISK    1.0  PQ: 0 ANSI: 5
[   11.406028] scsi 2:0:0:0: Attached scsi generic sg1 type 0
[   11.406177] sd 2:0:0:0: [sda] 104857600 512-byte logical blocks: (53.7 GB/50.0 GiB)
[   11.406183] sd 2:0:0:0: [sda] Write Protect is off
[   11.406183] sd 2:0:0:0: [sda] Mode Sense: 00 3a 00 00
[   11.406190] sd 2:0:0:0: [sda] Write cache: enabled, read cache: enabled, doesn't support DPO or FUA
[   11.669566]  sda: sda1
[   11.670466] sd 2:0:0:0: [sda] Attached SCSI disk
[   11.741244] e1000 0000:00:03.0 eth0: (PCI:33MHz:32-bit) 08:00:27:8c:ca:e0
[   11.741249] e1000 0000:00:03.0 eth0: Intel(R) PRO/1000 Network Connection
[   11.750898] e1000 0000:00:03.0 enp0s3: renamed from eth0
[   11.849948] usb 2-1: New USB device found, idVendor=80ee, idProduct=0021, bcdDevice= 1.00
[   11.849950] usb 2-1: New USB device strings: Mfr=1, Product=3, SerialNumber=0
[   11.849951] usb 2-1: Product: USB Tablet
[   11.849952] usb 2-1: Manufacturer: VirtualBox
[   11.870869] hid: raw HID events driver (C) Jiri Kosina
[   11.896689] usbcore: registered new interface driver usbhid
[   11.896689] usbhid: USB HID core driver
[   11.905780] input: VirtualBox USB Tablet as /devices/pci0000:00/0000:00:06.0/usb2/2-1/2-1:1.0/0003:80EE:0021.0001/input/input6
[   11.906937] hid-generic 0003:80EE:0021.0001: input,hidraw0: USB HID v1.10 Mouse [VirtualBox USB Tablet] on usb-0000:00:06.0-1/input0
[   11.981094] EXT4-fs (sda1): mounted filesystem with ordered data mode. Opts: (null)
[   12.293924] systemd[1]: systemd 237 running in system mode. (+PAM +AUDIT +SELINUX +IMA +APPARMOR +SMACK +SYSVINIT +UTMP +LIBCRYPTSETUP +GCRYPT +GNUTLS +ACL +XZ +LZ4 +SECCOMP +BLKID +ELFUTILS +KMOD -IDN2 +IDN -PCRE2 default-hierarchy=hybrid)
[   12.293943] systemd[1]: Detected virtualization oracle.
[   12.293948] systemd[1]: Detected architecture x86-64.
[   12.324609] systemd[1]: Set hostname to <os-VirtualBox>.
[   12.626183] systemd[1]: Reached target User and Group Name Lookups.
[   12.626267] systemd[1]: Reached target Mounting snaps.
[   12.626274] systemd[1]: Reached target Remote File Systems.
[   12.626432] systemd[1]: Set up automount Arbitrary Executable File Formats File System Automount Point.
[   12.626551] systemd[1]: Created slice System Slice.
[   12.626603] systemd[1]: Listening on udev Control Socket.
[   12.712768] EXT4-fs (sda1): re-mounted. Opts: errors=remount-ro
[   12.729311] lp: driver loaded but no devices found
[   12.746188] ppdev: user-space parallel port driver
[   12.812731] systemd-journald[336]: Received request to flush runtime journal from PID 1
[   12.820129] Adding 2097148k swap on /swapfile.  Priority:-2 extents:6 across:2260988k FS
[   13.170514] vboxguest: loading out-of-tree module taints kernel.
[   13.170646] vboxguest: module verification failed: signature and/or required key missing - tainting kernel
[   13.192914] vgdrvHeartbeatInit: Setting up heartbeat to trigger every 2000 milliseconds
[   13.201944] Host supports full mouse state reporting, switching to extended mouse integration protocol
[   13.201985] input: VirtualBox mouse integration as /devices/pci0000:00/0000:00:04.0/input/input7
[   13.229364] vboxguest: Successfully loaded version 7.0.6 r155176
[   13.229412] vboxguest: misc device minor 59, IRQ 20, I/O port d040, MMIO at 00000000f0400000 (size 0x400000)
[   13.229413] vboxguest: Successfully loaded version 7.0.6 r155176 (interface 0x00010004)
[   13.451359] RAPL PMU: API unit is 2^-32 Joules, 0 fixed counters, 10737418240 ms ovfl timer
[   13.634111] cryptd: max_cpu_qlen set to 1000
[   13.709207] SSE version of gcm_enc/dec engaged.
[   14.825149] drm: disagrees about version of symbol bpf_trace_run4
[   14.825150] drm: Unknown symbol bpf_trace_run4 (err -22)
[   14.825176] drm: disagrees about version of symbol trace_raw_output_prep
[   14.825176] drm: Unknown symbol trace_raw_output_prep (err -22)
[   14.825218] drm: disagrees about version of symbol trace_event_raw_init
[   14.825219] drm: Unknown symbol trace_event_raw_init (err -22)
[   14.825236] drm: disagrees about version of symbol event_triggers_call
[   14.825236] drm: Unknown symbol event_triggers_call (err -22)
[   14.825358] drm: disagrees about version of symbol trace_event_buffer_commit
[   14.825359] drm: Unknown symbol trace_event_buffer_commit (err -22)
[   14.825378] drm: disagrees about version of symbol trace_event_ignore_this_pid
[   14.825379] drm: Unknown symbol trace_event_ignore_this_pid (err -22)
[   15.275725] drm: disagrees about version of symbol trace_event_reg
[   15.275727] drm: Unknown symbol trace_event_reg (err -22)
[   15.275764] drm: disagrees about version of symbol trace_define_field
[   15.275765] drm: Unknown symbol trace_define_field (err -22)
[   15.275790] drm: disagrees about version of symbol bpf_trace_run3
[   15.275790] drm: Unknown symbol bpf_trace_run3 (err -22)
[   15.275805] drm: disagrees about version of symbol trace_event_buffer_reserve
[   15.275806] drm: Unknown symbol trace_event_buffer_reserve (err -22)
[   15.674117] snd_intel8x0 0000:00:05.0: white list rate for 1028:0177 is 48000
[   16.192695] hrtimer: interrupt took 12362157 ns
[   17.146054] audit: type=1400 audit(1680682349.816:2): apparmor="STATUS" operation="profile_load" profile="unconfined" name="/usr/bin/man" pid=612 comm="apparmor_parser"
[   17.146057] audit: type=1400 audit(1680682349.816:3): apparmor="STATUS" operation="profile_load" profile="unconfined" name="man_filter" pid=612 comm="apparmor_parser"
[   17.146059] audit: type=1400 audit(1680682349.816:4): apparmor="STATUS" operation="profile_load" profile="unconfined" name="man_groff" pid=612 comm="apparmor_parser"
[   17.150246] audit: type=1400 audit(1680682349.820:5): apparmor="STATUS" operation="profile_load" profile="unconfined" name="/usr/lib/snapd/snap-confine" pid=613 comm="apparmor_parser"
[   17.150250] audit: type=1400 audit(1680682349.820:6): apparmor="STATUS" operation="profile_load" profile="unconfined" name="/usr/lib/snapd/snap-confine//mount-namespace-capture-helper" pid=613 comm="apparmor_parser"
[   17.152316] audit: type=1400 audit(1680682349.824:7): apparmor="STATUS" operation="profile_load" profile="unconfined" name="/usr/sbin/ippusbxd" pid=616 comm="apparmor_parser"
[   17.158546] audit: type=1400 audit(1680682349.824:8): apparmor="STATUS" operation="profile_load" profile="unconfined" name="/sbin/dhclient" pid=609 comm="apparmor_parser"
[   17.158548] audit: type=1400 audit(1680682349.832:9): apparmor="STATUS" operation="profile_load" profile="unconfined" name="/usr/lib/NetworkManager/nm-dhcp-client.action" pid=609 comm="apparmor_parser"
[   17.158553] audit: type=1400 audit(1680682349.832:10): apparmor="STATUS" operation="profile_load" profile="unconfined" name="/usr/lib/NetworkManager/nm-dhcp-helper" pid=609 comm="apparmor_parser"
[   17.158554] audit: type=1400 audit(1680682349.832:11): apparmor="STATUS" operation="profile_load" profile="unconfined" name="/usr/lib/connman/scripts/dhclient-script" pid=609 comm="apparmor_parser"
[   20.307721] e1000: enp0s3 NIC Link is Up 1000 Mbps Full Duplex, Flow Control: RX
[   20.331616] IPv6: ADDRCONF(NETDEV_CHANGE): enp0s3: link becomes ready
[   20.914004] drm: disagrees about version of symbol bpf_trace_run4
[   20.914005] drm: Unknown symbol bpf_trace_run4 (err -22)
[   20.914028] drm: disagrees about version of symbol trace_raw_output_prep
[   20.914029] drm: Unknown symbol trace_raw_output_prep (err -22)
[   20.914084] drm: disagrees about version of symbol trace_event_raw_init
[   20.914084] drm: Unknown symbol trace_event_raw_init (err -22)
[   20.914100] drm: disagrees about version of symbol event_triggers_call
[   20.914101] drm: Unknown symbol event_triggers_call (err -22)
[   20.914136] drm: disagrees about version of symbol trace_event_buffer_commit
[   20.914137] drm: Unknown symbol trace_event_buffer_commit (err -22)
[   20.914152] drm: disagrees about version of symbol trace_event_ignore_this_pid
[   20.914153] drm: Unknown symbol trace_event_ignore_this_pid (err -22)
[   20.914296] drm: disagrees about version of symbol trace_event_reg
[   20.914297] drm: Unknown symbol trace_event_reg (err -22)
[   20.914324] drm: disagrees about version of symbol trace_define_field
[   20.914324] drm: Unknown symbol trace_define_field (err -22)
[   20.914342] drm: disagrees about version of symbol bpf_trace_run3
[   20.914342] drm: Unknown symbol bpf_trace_run3 (err -22)
[   20.914354] drm: disagrees about version of symbol trace_event_buffer_reserve
[   20.914355] drm: Unknown symbol trace_event_buffer_reserve (err -22)
[   21.175938] 08:12:33.850120 main     VBoxService 7.0.6 r155176 (verbosity: 0) linux.amd64 (Jan 11 2023 15:34:33) release log
               08:12:33.850122 main     Log opened 2023-04-05T08:12:33.850114000Z
[   21.176002] 08:12:33.850401 main     OS Product: Linux
[   21.176052] 08:12:33.850454 main     OS Release: 5.5.13
[   21.176135] 08:12:33.850503 main     OS Version: #3 SMP Fri Mar 17 01:46:58 KST 2023
[   21.179588] 08:12:33.853975 main     Executable: /opt/VBoxGuestAdditions-7.0.6/sbin/VBoxService
               08:12:33.853976 main     Process ID: 1054
               08:12:33.853977 main     Package type: LINUX_64BITS_GENERIC
[   21.198153] 08:12:33.872521 main     7.0.6 r155176 started. Verbose level = 0
[   21.206423] 08:12:33.880803 main     vbglR3GuestCtrlDetectPeekGetCancelSupport: Supported (#1)
[   31.978793] rfkill: input handler disabled
[  106.514441] 08:13:59.231410 control  Guest control service stopped
[  106.514520] 08:13:59.231510 control  Guest control worker returned with rc=VINF_TRY_AGAIN
[  106.515616] 08:13:59.232575 main     Session 0 is about to close ...
[  106.515667] 08:13:59.232661 main     Stopping all guest processes ...
[  106.515808] 08:13:59.232712 main     Closing all guest files ...
[  106.525586] 08:13:59.242579 main     Ended.
[  144.264254] ISO 9660 Extensions: Microsoft Joliet Level 3
[  144.286306] ISO 9660 Extensions: RRIP_1991A
[  386.204225] 08:18:39.061017 main     VBoxService 7.0.6 r155176 (verbosity: 0) linux.amd64 (Jan 11 2023 15:34:33) release log
               08:18:39.061019 main     Log opened 2023-04-05T08:18:39.061011000Z
[  386.204319] 08:18:39.061129 main     OS Product: Linux
[  386.204377] 08:18:39.061211 main     OS Release: 5.5.13
[  386.204432] 08:18:39.061268 main     OS Version: #3 SMP Fri Mar 17 01:46:58 KST 2023
[  386.204512] 08:18:39.061322 main     Executable: /opt/VBoxGuestAdditions-7.0.6/sbin/VBoxService
               08:18:39.061323 main     Process ID: 9140
               08:18:39.061324 main     Package type: LINUX_64BITS_GENERIC
[  386.224701] 08:18:39.081502 main     7.0.6 r155176 started. Verbose level = 0
[  386.226215] 08:18:39.083035 main     vbglR3GuestCtrlDetectPeekGetCancelSupport: Supported (#1)
[  392.239538] all_pid_with_macro: module license 'unspecified' taints kernel.
[  392.239539] Disabling lock debugging due to kernel taint
[  392.252321] Init Module....
[  392.252322] systemd[1]
[  392.252323] kthreadd[2]
[  392.252324] rcu_gp[3]
[  392.252325] rcu_par_gp[4]
[  392.252325] kworker/0:0[5]
[  392.252326] kworker/0:0H[6]
[  392.252327] kworker/0:1[7]
[  392.252327] kworker/u12:0[8]
[  392.252328] mm_percpu_wq[9]
[  392.252328] ksoftirqd/0[10]
[  392.252329] rcu_sched[11]
[  392.252330] migration/0[12]
[  392.252330] idle_inject/0[13]
[  392.252331] cpuhp/0[14]
[  392.252331] cpuhp/1[15]
[  392.252332] idle_inject/1[16]
[  392.252332] migration/1[17]
[  392.252333] ksoftirqd/1[18]
[  392.252334] kworker/1:0[19]
[  392.252334] kworker/1:0H[20]
[  392.252335] cpuhp/2[21]
[  392.252335] idle_inject/2[22]
[  392.252336] migration/2[23]
[  392.252336] ksoftirqd/2[24]
[  392.252337] kworker/2:0[25]
[  392.252338] kworker/2:0H[26]
[  392.252338] cpuhp/3[27]
[  392.252339] idle_inject/3[28]
[  392.252339] migration/3[29]
[  392.252340] ksoftirqd/3[30]
[  392.252340] kworker/3:0[31]
[  392.252341] kworker/3:0H[32]
[  392.252342] cpuhp/4[33]
[  392.252342] idle_inject/4[34]
[  392.252343] migration/4[35]
[  392.252343] ksoftirqd/4[36]
[  392.252344] kworker/4:0[37]
[  392.252345] kworker/4:0H[38]
[  392.252345] cpuhp/5[39]
[  392.252346] idle_inject/5[40]
[  392.252346] migration/5[41]
[  392.252347] ksoftirqd/5[42]
[  392.252347] kworker/5:0[43]
[  392.252348] kworker/5:0H[44]
[  392.252348] kdevtmpfs[45]
[  392.252349] netns[46]
[  392.252350] rcu_tasks_kthre[47]
[  392.252350] kauditd[48]
[  392.252351] khungtaskd[49]
[  392.252351] oom_reaper[50]
[  392.252352] writeback[51]
[  392.252352] kcompactd0[52]
[  392.252353] ksmd[53]
[  392.252353] khugepaged[54]
[  392.252354] kworker/u12:1[56]
[  392.252355] kworker/1:1[60]
[  392.252355] kworker/2:1[65]
[  392.252356] kworker/3:1[74]
[  392.252357] kintegrityd[149]
[  392.252357] kblockd[150]
[  392.252358] blkcg_punt_bio[151]
[  392.252358] tpm_dev_wq[152]
[  392.252359] ata_sff[153]
[  392.252359] md[154]
[  392.252360] edac-poller[155]
[  392.252360] devfreq_wq[156]
[  392.252361] watchdogd[157]
[  392.252362] kworker/4:1[158]
[  392.252362] kworker/5:1[159]
[  392.252363] kswapd0[162]
[  392.252364] ecryptfs-kthrea[163]
[  392.252364] kthrotld[166]
[  392.252365] acpi_thermal_pm[167]
[  392.252365] scsi_eh_0[168]
[  392.252366] scsi_tmf_0[169]
[  392.252366] scsi_eh_1[170]
[  392.252367] scsi_tmf_1[171]
[  392.252368] vfio-irqfd-clea[172]
[  392.252368] kworker/u12:2[173]
[  392.252369] ipv6_addrconf[174]
[  392.252369] kstrp[186]
[  392.252370] kworker/u13:0[190]
[  392.252370] charger_manager[206]
[  392.252371] kworker/3:1H[207]
[  392.252372] kworker/0:2[246]
[  392.252372] kworker/2:2[267]
[  392.252373] scsi_eh_2[268]
[  392.252373] scsi_tmf_2[269]
[  392.252374] kworker/4:1H[271]
[  392.252374] kworker/2:1H[273]
[  392.252375] kworker/1:1H[274]
[  392.252376] kworker/1:2[275]
[  392.252376] kworker/0:1H[294]
[  392.252377] jbd2/sda1-8[296]
[  392.252377] ext4-rsv-conver[297]
[  392.252378] kworker/3:2[310]
[  392.252379] kworker/5:1H[311]
[  392.252379] kworker/5:2[330]
[  392.252380] systemd-journal[336]
[  392.252380] systemd-udevd[356]
[  392.252381] loop0[361]
[  392.252381] loop1[366]
[  392.252382] loop2[377]
[  392.252382] loop3[379]
[  392.252383] loop4[388]
[  392.252383] loop5[389]
[  392.252384] loop6[409]
[  392.252384] iprt-VBoxWQueue[415]
[  392.252385] loop7[420]
[  392.252385] loop8[430]
[  392.252386] loop9[436]
[  392.252387] cryptd[443]
[  392.252387] loop10[445]
[  392.252388] loop11[466]
[  392.252388] loop12[485]
[  392.252389] kworker/4:2[491]
[  392.252407] loop13[509]
[  392.252408] loop14[511]
[  392.252408] loop15[514]
[  392.252409] loop16[516]
[  392.252409] loop17[535]
[  392.252410] loop18[536]
[  392.252411] loop19[539]
[  392.252411] loop20[540]
[  392.252412] loop21[541]
[  392.252412] loop22[542]
[  392.252413] loop23[543]
[  392.252414] loop24[544]
[  392.252415] systemd-resolve[570]
[  392.252415] dbus-daemon[708]
[  392.252416] anacron[709]
[  392.252416] acpid[711]
[  392.252417] NetworkManager[713]
[  392.252418] udisksd[714]
[  392.252419] wpa_supplicant[715]
[  392.252419] networkd-dispat[717]
[  392.252420] accounts-daemon[719]
[  392.252420] avahi-daemon[721]
[  392.252421] snapd[724]
[  392.252421] irqbalance[725]
[  392.252422] cron[727]
[  392.252423] ModemManager[730]
[  392.252423] rsyslogd[731]
[  392.252424] systemd-logind[737]
[  392.252424] avahi-daemon[751]
[  392.252425] polkitd[786]
[  392.252426] unattended-upgr[833]
[  392.252426] dhclient[913]
[  392.252427] whoopsie[927]
[  392.252428] kerneloops[945]
[  392.252428] kerneloops[951]
[  392.252429] kworker/3:3[1046]
[  392.252429] gdm3[1059]
[  392.252430] gdm-session-wor[1088]
[  392.252431] systemd[1094]
[  392.252431] (sd-pam)[1095]
[  392.252432] gnome-keyring-d[1114]
[  392.252433] gdm-x-session[1129]
[  392.252433] Xorg[1131]
[  392.252434] packagekitd[1346]
[  392.252435] dbus-daemon[1491]
[  392.252435] gnome-session-b[1497]
[  392.252436] VBoxClient[1595]
[  392.252437] VBoxClient[1596]
[  392.252437] VBoxClient[1610]
[  392.252438] VBoxClient[1611]
[  392.252439] VBoxClient[1618]
[  392.252439] VBoxClient[1619]
[  392.252440] VBoxClient[1636]
[  392.252441] VBoxClient[1637]
[  392.252441] ssh-agent[1638]
[  392.252442] at-spi-bus-laun[1655]
[  392.252443] dbus-daemon[1660]
[  392.252443] at-spi2-registr[1662]
[  392.252444] gnome-shell[1704]
[  392.252445] upowerd[1710]
[  392.252446] gvfsd[1732]
[  392.252446] gvfsd-fuse[1737]
[  392.252447] pulseaudio[1748]
[  392.252447] rtkit-daemon[1749]
[  392.252448] ibus-daemon[1767]
[  392.252449] ibus-dconf[1771]
[  392.252449] xdg-permission-[1772]
[  392.252450] ibus-x11[1774]
[  392.252451] ibus-portal[1781]
[  392.252451] gnome-shell-cal[1790]
[  392.252452] evolution-sourc[1795]
[  392.252453] goa-daemon[1802]
[  392.252454] boltd[1804]
[  392.252454] gvfs-udisks2-vo[1818]
[  392.252455] gvfs-mtp-volume[1822]
[  392.252456] goa-identity-se[1832]
[  392.252456] gvfs-afc-volume[1836]
[  392.252457] gvfs-goa-volume[1841]
[  392.252458] gvfs-gphoto2-vo[1847]
[  392.252458] gsd-power[1853]
[  392.252459] gsd-print-notif[1855]
[  392.252460] gsd-rfkill[1856]
[  392.252460] gsd-screensaver[1858]
[  392.252461] gsd-sharing[1863]
[  392.252462] gsd-smartcard[1864]
[  392.252463] gsd-sound[1867]
[  392.252463] gsd-xsettings[1872]
[  392.252464] gsd-wacom[1877]
[  392.252465] gsd-a11y-settin[1884]
[  392.252465] gsd-clipboard[1885]
[  392.252466] gsd-color[1887]
[  392.252467] gsd-datetime[1891]
[  392.252467] gsd-housekeepin[1893]
[  392.252468] gsd-keyboard[1900]
[  392.252469] gsd-media-keys[1903]
[  392.252469] gsd-mouse[1906]
[  392.252470] gsd-printer[1924]
[  392.252471] colord[1947]
[  392.252471] nautilus-deskto[1952]
[  392.252472] gsd-disk-utilit[1956]
[  392.252472] gvfsd-trash[2011]
[  392.252490] evolution-calen[2025]
[  392.252491] dconf-service[2048]
[  392.252492] ibus-engine-sim[2054]
[  392.252493] evolution-calen[2063]
[  392.252493] evolution-addre[2085]
[  392.252494] evolution-addre[2097]
[  392.252495] gvfsd-metadata[2114]
[  392.252495] kworker/2:3[2205]
[  392.252496] kworker/2:4[2206]
[  392.252497] kworker/4:3[2209]
[  392.252497] kworker/4:4[2212]
[  392.252498] gnome-software[2228]
[  392.252498] update-notifier[2230]
[  392.252499] fwupd[2250]
[  392.252499] kworker/1:3[2428]
[  392.252500] kworker/1:4[2429]
[  392.252501] kworker/1:5[2431]
[  392.252501] kworker/1:6[2432]
[  392.252521] kworker/1:7[2433]
[  392.252522] kworker/1:8[2434]
[  392.252522] kworker/4:5[2455]
[  392.252523] kworker/4:6[2457]
[  392.252523] kworker/3:4[13205]
[  392.252524] kworker/3:5[13206]
[  392.252525] kworker/3:6[13208]
[  392.252525] kworker/0:3[13419]
[  392.252526] kworker/0:4[13421]
[  392.252526] kworker/0:5[13422]
[  392.252527] kworker/0:6[13424]
[  392.252528] nautilus[26425]
[  392.252529] kworker/5:3[26580]
[  392.252529] kworker/5:4[26582]
[  392.252530] kworker/5:5[26583]
[  392.252530] kworker/5:6[26584]
[  392.252531] kworker/2:5[26722]
[  392.252532] kworker/2:6[26723]
[  392.252532] kworker/2:7[26750]
[  392.252533] code[32732]
[  392.252533] code[32739]
[  392.252534] code[32740]
[  392.252534] code[32742]
[  392.252535] chrome_crashpad[319]
[  392.252536] xdg-desktop-por[339]
[  392.252537] xdg-document-po[343]
[  392.252537] code[353]
[  392.252538] xdg-desktop-por[360]
[  392.252539] code[393]
[  392.252539] code[404]
[  392.252540] code[447]
[  392.252541] code[461]
[  392.252541] code[488]
[  392.252542] code[587]
[  392.252543] cpptools[1276]
[  392.252544] cpptools-srv[1716]
[  392.252545] bash[6377]
[  392.252545] cupsd[8271]
[  392.252546] cups-browsed[8272]
[  392.252547] kworker/u12:3[8957]
[  392.252548] kworker/3:7[8977]
[  392.252548] sudo[9032]
[  392.252549] VBoxService[9147]
[  392.252549] insmod[9224]
[  461.664267] Module removing...
[  643.702719] kauditd_printk_skb: 42 callbacks suppressed
[  643.702720] audit: type=1400 audit(1680682976.683:54): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="/snap/snapd/18596/usr/lib/snapd/snap-confine" pid=10490 comm="apparmor_parser"
[  643.742511] audit: type=1400 audit(1680682976.727:55): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="/snap/snapd/18596/usr/lib/snapd/snap-confine//mount-namespace-capture-helper" pid=10490 comm="apparmor_parser"
[  644.059611] audit: type=1400 audit(1680682977.039:56): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="snap.gnome-calculator.hook.configure" pid=10494 comm="apparmor_parser"
[  644.265936] audit: type=1400 audit(1680682977.247:57): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="snap.gnome-calculator.gnome-calculator" pid=10493 comm="apparmor_parser"
[  644.942757] audit: type=1400 audit(1680682977.923:58): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="snap-update-ns.gnome-calculator" pid=10492 comm="apparmor_parser"
[  657.523204] audit: type=1400 audit(1680682990.398:59): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="snap.gnome-logs.hook.configure" pid=10843 comm="apparmor_parser"
[  657.524425] audit: type=1400 audit(1680682990.398:60): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="snap.gnome-characters.hook.configure" pid=10840 comm="apparmor_parser"
[  657.650223] audit: type=1400 audit(1680682990.398:61): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="snap.gnome-characters.gnome-characters" pid=10839 comm="apparmor_parser"
[  657.668997] audit: type=1400 audit(1680682990.398:62): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="snap.gnome-logs.gnome-logs" pid=10842 comm="apparmor_parser"
[  657.764654] audit: type=1400 audit(1680682990.398:63): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="snap.gnome-system-monitor.hook.configure" pid=10846 comm="apparmor_parser"
[  658.253610] audit: type=1400 audit(1680682990.998:64): apparmor="STATUS" operation="profile_replace" info="same as current profile, skipping" profile="unconfined" name="snap-update-ns.gnome-logs" pid=10841 comm="apparmor_parser"
[  658.355822] audit: type=1400 audit(1680682991.278:65): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="snap.gnome-system-monitor.gnome-system-monitor" pid=10845 comm="apparmor_parser"
[  658.406924] audit: type=1400 audit(1680682991.394:66): apparmor="STATUS" operation="profile_replace" info="same as current profile, skipping" profile="unconfined" name="snap-update-ns.gnome-characters" pid=10838 comm="apparmor_parser"
[  658.502594] audit: type=1400 audit(1680682991.490:67): apparmor="STATUS" operation="profile_replace" info="same as current profile, skipping" profile="unconfined" name="snap-update-ns.gnome-system-monitor" pid=10844 comm="apparmor_parser"
[  675.566290] audit: type=1400 audit(1680683008.559:68): apparmor="STATUS" operation="profile_replace" info="same as current profile, skipping" profile="unconfined" name="/snap/snapd/18596/usr/lib/snapd/snap-confine" pid=10875 comm="apparmor_parser"
[  675.566294] audit: type=1400 audit(1680683008.559:69): apparmor="STATUS" operation="profile_replace" info="same as current profile, skipping" profile="unconfined" name="/snap/snapd/18596/usr/lib/snapd/snap-confine//mount-namespace-capture-helper" pid=10875 comm="apparmor_parser"
[  675.700836] audit: type=1400 audit(1680683008.699:70): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="snap.gnome-calculator.hook.configure" pid=10879 comm="apparmor_parser"
[  675.844929] audit: type=1400 audit(1680683008.839:71): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="snap.gnome-calculator.gnome-calculator" pid=10878 comm="apparmor_parser"
[  676.313864] audit: type=1400 audit(1680683009.303:72): apparmor="STATUS" operation="profile_replace" profile="unconfined" name="snap-update-ns.gnome-calculator" pid=10877 comm="apparmor_parser"
[  750.902330] INSTALL: parent_child
[  750.902331] 
                   1 task systemd
                children: 
[  750.902332]   336 systemd-journal
[  750.902333]   356 systemd-udevd
[  750.902334]   570 systemd-resolve
[  750.902334]   708 dbus-daemon
[  750.902335]   709 anacron
[  750.902335]   711 acpid
[  750.902336]   713 NetworkManager
[  750.902336]   714 udisksd
[  750.902337]   715 wpa_supplicant
[  750.902337]   717 networkd-dispat
[  750.902338]   719 accounts-daemon
[  750.902338]   721 avahi-daemon
[  750.902339]   724 snapd
[  750.902339]   725 irqbalance
[  750.902340]   727 cron
[  750.902340]   730 ModemManager
[  750.902341]   731 rsyslogd
[  750.902341]   737 systemd-logind
[  750.902342]   786 polkitd
[  750.902342]   833 unattended-upgr
[  750.902343]   927 whoopsie
[  750.902344]   945 kerneloops
[  750.902344]   951 kerneloops
[  750.902345]  1059 gdm3
[  750.902345]  1094 systemd
[  750.902346]  1114 gnome-keyring-d
[  750.902347]  1346 packagekitd
[  750.902347]  1595 VBoxClient
[  750.902348]  1610 VBoxClient
[  750.902348]  1618 VBoxClient
[  750.902349]  1636 VBoxClient
[  750.902350]  1710 upowerd
[  750.902350]  1749 rtkit-daemon
[  750.902351]  1748 pulseaudio
[  750.902351]  1774 ibus-x11
[  750.902352]  1804 boltd
[  750.902353]  1924 gsd-printer
[  750.902353]  1947 colord
[  750.902354]  2250 fwupd
[  750.902354]  8271 cupsd
[  750.902355]  8272 cups-browsed
[  750.902356]  9147 VBoxService
[  750.902440]  9850 update-notifier
[  750.902441] 
                   2 task kthreadd
                children: 
[  750.902442]     3 rcu_gp
[  750.902442]     4 rcu_par_gp
[  750.902443]     5 kworker/0:0
[  750.902443]     6 kworker/0:0H
[  750.902444]     7 kworker/0:1
[  750.902444]     9 mm_percpu_wq
[  750.902445]    10 ksoftirqd/0
[  750.902445]    11 rcu_sched
[  750.902445]    12 migration/0
[  750.902446]    13 idle_inject/0
[  750.902446]    14 cpuhp/0
[  750.902447]    15 cpuhp/1
[  750.902447]    16 idle_inject/1
[  750.902448]    17 migration/1
[  750.902448]    18 ksoftirqd/1
[  750.902449]    20 kworker/1:0H
[  750.902449]    21 cpuhp/2
[  750.902450]    22 idle_inject/2
[  750.902450]    23 migration/2
[  750.902451]    24 ksoftirqd/2
[  750.902451]    25 kworker/2:0
[  750.902452]    26 kworker/2:0H
[  750.902452]    27 cpuhp/3
[  750.902453]    28 idle_inject/3
[  750.902453]    29 migration/3
[  750.902454]    30 ksoftirqd/3
[  750.902454]    32 kworker/3:0H
[  750.902454]    33 cpuhp/4
[  750.902455]    34 idle_inject/4
[  750.902456]    35 migration/4
[  750.902456]    36 ksoftirqd/4
[  750.902457]    38 kworker/4:0H
[  750.902457]    39 cpuhp/5
[  750.902458]    40 idle_inject/5
[  750.902458]    41 migration/5
[  750.902458]    42 ksoftirqd/5
[  750.902459]    44 kworker/5:0H
[  750.902459]    45 kdevtmpfs
[  750.902460]    46 netns
[  750.902460]    47 rcu_tasks_kthre
[  750.902461]    48 kauditd
[  750.902461]    49 khungtaskd
[  750.902462]    50 oom_reaper
[  750.902462]    51 writeback
[  750.902463]    52 kcompactd0
[  750.902464]    53 ksmd
[  750.902464]    54 khugepaged
[  750.902465]    56 kworker/u12:1
[  750.902465]    74 kworker/3:1
[  750.902466]   149 kintegrityd
[  750.902466]   150 kblockd
[  750.902467]   151 blkcg_punt_bio
[  750.902467]   152 tpm_dev_wq
[  750.902468]   153 ata_sff
[  750.902468]   154 md
[  750.902469]   155 edac-poller
[  750.902469]   156 devfreq_wq
[  750.902470]   157 watchdogd
[  750.902470]   162 kswapd0
[  750.902471]   163 ecryptfs-kthrea
[  750.902471]   166 kthrotld
[  750.902472]   167 acpi_thermal_pm
[  750.902472]   168 scsi_eh_0
[  750.902473]   169 scsi_tmf_0
[  750.902473]   170 scsi_eh_1
[  750.902474]   171 scsi_tmf_1
[  750.902474]   172 vfio-irqfd-clea
[  750.902475]   173 kworker/u12:2
[  750.902475]   174 ipv6_addrconf
[  750.902476]   186 kstrp
[  750.902476]   190 kworker/u13:0
[  750.902477]   206 charger_manager
[  750.902477]   207 kworker/3:1H
[  750.902478]   246 kworker/0:2
[  750.902478]   268 scsi_eh_2
[  750.902479]   269 scsi_tmf_2
[  750.902479]   271 kworker/4:1H
[  750.902480]   273 kworker/2:1H
[  750.902481]   274 kworker/1:1H
[  750.902481]   294 kworker/0:1H
[  750.902482]   296 jbd2/sda1-8
[  750.902482]   297 ext4-rsv-conver
[  750.902483]   310 kworker/3:2
[  750.902483]   311 kworker/5:1H
[  750.902483]   330 kworker/5:2
[  750.902484]   361 loop0
[  750.902484]   366 loop1
[  750.902485]   377 loop2
[  750.902485]   379 loop3
[  750.902486]   388 loop4
[  750.902486]   415 iprt-VBoxWQueue
[  750.902487]   420 loop7
[  750.902487]   430 loop8
[  750.902488]   436 loop9
[  750.902488]   443 cryptd
[  750.902489]   445 loop10
[  750.902489]   466 loop11
[  750.902490]   485 loop12
[  750.902490]   509 loop13
[  750.902491]   511 loop14
[  750.902491]   514 loop15
[  750.902492]   535 loop17
[  750.902493]   540 loop20
[  750.902493]   542 loop22
[  750.902493]   543 loop23
[  750.902494]   544 loop24
[  750.902495]  2209 kworker/4:3
[  750.902495]  2212 kworker/4:4
[  750.902496]  2429 kworker/1:4
[  750.902496]  2431 kworker/1:5
[  750.902497]  13205 kworker/3:4
[  750.902497]  13206 kworker/3:5
[  750.902498]  13208 kworker/3:6
[  750.902499]  13419 kworker/0:3
[  750.902499]  13421 kworker/0:4
[  750.902500]  13422 kworker/0:5
[  750.902501]  26580 kworker/5:3
[  750.902501]  26723 kworker/2:6
[  750.902502]  8957 kworker/u12:3
[  750.902502]  8977 kworker/3:7
[  750.902503]  10104 kworker/0:6
[  750.902503]  10106 kworker/0:7
[  750.902504]  10107 loop25
[  750.902504]  10134 loop26
[  750.902505]  10171 kworker/5:0
[  750.902505]  10172 kworker/5:1
[  750.902506]  10173 kworker/5:4
[  750.902506]  10174 kworker/5:5
[  750.902507]  10175 kworker/5:6
[  750.902507]  10201 kworker/2:1
[  750.902508]  10202 kworker/2:2
[  750.902508]  10203 kworker/2:3
[  750.902509]  10204 kworker/2:4
[  750.902509]  10205 kworker/2:5
[  750.902510]  10417 kworker/2:7
[  750.902510]  10418 loop18
[  750.902511]  10475 kworker/4:0
[  750.902512]  10478 kworker/4:1
[  750.902512]  10479 kworker/4:2
[  750.902513]  10481 kworker/4:5
[  750.902513]  10484 loop19
[  750.902514]  10528 kworker/1:0
[  750.902514]  10529 kworker/1:1
[  750.902515]  10530 kworker/1:2
[  750.902515]  10531 kworker/1:3
[  750.902516]  10532 kworker/1:6
[  750.902516]  10667 loop21
[  750.902517]  10832 loop5
[  750.902517] 
                   3 task rcu_gp
                children: 
[  750.902518] 
                   4 task rcu_par_gp
                children: 
[  750.902518] 
                   5 task kworker/0:0
                children: 
[  750.902519] 
                   6 task kworker/0:0H
                children: 
[  750.902519] 
                   7 task kworker/0:1
                children: 
[  750.902520] 
                   9 task mm_percpu_wq
                children: 
[  750.902520] 
                  10 task ksoftirqd/0
                children: 
[  750.902521] 
                  11 task rcu_sched
                children: 
[  750.902521] 
                  12 task migration/0
                children: 
[  750.902522] 
                  13 task idle_inject/0
                children: 
[  750.902522] 
                  14 task cpuhp/0
                children: 
[  750.902522] 
                  15 task cpuhp/1
                children: 
[  750.902523] 
                  16 task idle_inject/1
                children: 
[  750.902523] 
                  17 task migration/1
                children: 
[  750.902524] 
                  18 task ksoftirqd/1
                children: 
[  750.902524] 
                  20 task kworker/1:0H
                children: 
[  750.902525] 
                  21 task cpuhp/2
                children: 
[  750.902525] 
                  22 task idle_inject/2
                children: 
[  750.902526] 
                  23 task migration/2
                children: 
[  750.902526] 
                  24 task ksoftirqd/2
                children: 
[  750.902526] 
                  25 task kworker/2:0
                children: 
[  750.902527] 
                  26 task kworker/2:0H
                children: 
[  750.902527] 
                  27 task cpuhp/3
                children: 
[  750.902528] 
                  28 task idle_inject/3
                children: 
[  750.902528] 
                  29 task migration/3
                children: 
[  750.902528] 
                  30 task ksoftirqd/3
                children: 
[  750.902529] 
                  32 task kworker/3:0H
                children: 
[  750.902529] 
                  33 task cpuhp/4
                children: 
[  750.902530] 
                  34 task idle_inject/4
                children: 
[  750.902530] 
                  35 task migration/4
                children: 
[  750.902531] 
                  36 task ksoftirqd/4
                children: 
[  750.902531] 
                  38 task kworker/4:0H
                children: 
[  750.902532] 
                  39 task cpuhp/5
                children: 
[  750.902532] 
                  40 task idle_inject/5
                children: 
[  750.902533] 
                  41 task migration/5
                children: 
[  750.902533] 
                  42 task ksoftirqd/5
                children: 
[  750.902533] 
                  44 task kworker/5:0H
                children: 
[  750.902534] 
                  45 task kdevtmpfs
                children: 
[  750.902534] 
                  46 task netns
                children: 
[  750.902535] 
                  47 task rcu_tasks_kthre
                children: 
[  750.902535] 
                  48 task kauditd
                children: 
[  750.902536] 
                  49 task khungtaskd
                children: 
[  750.902536] 
                  50 task oom_reaper
                children: 
[  750.902537] 
                  51 task writeback
                children: 
[  750.902537] 
                  52 task kcompactd0
                children: 
[  750.902537] 
                  53 task ksmd
                children: 
[  750.902538] 
                  54 task khugepaged
                children: 
[  750.902538] 
                  56 task kworker/u12:1
                children: 
[  750.902539] 
                  74 task kworker/3:1
                children: 
[  750.902539] 
                 149 task kintegrityd
                children: 
[  750.902540] 
                 150 task kblockd
                children: 
[  750.902540] 
                 151 task blkcg_punt_bio
                children: 
[  750.902541] 
                 152 task tpm_dev_wq
                children: 
[  750.902541] 
                 153 task ata_sff
                children: 
[  750.902541] 
                 154 task md
                children: 
[  750.902542] 
                 155 task edac-poller
                children: 
[  750.902542] 
                 156 task devfreq_wq
                children: 
[  750.902543] 
                 157 task watchdogd
                children: 
[  750.902543] 
                 162 task kswapd0
                children: 
[  750.902544] 
                 163 task ecryptfs-kthrea
                children: 
[  750.902544] 
                 166 task kthrotld
                children: 
[  750.902545] 
                 167 task acpi_thermal_pm
                children: 
[  750.902545] 
                 168 task scsi_eh_0
                children: 
[  750.902545] 
                 169 task scsi_tmf_0
                children: 
[  750.902546] 
                 170 task scsi_eh_1
                children: 
[  750.902546] 
                 171 task scsi_tmf_1
                children: 
[  750.902547] 
                 172 task vfio-irqfd-clea
                children: 
[  750.902547] 
                 173 task kworker/u12:2
                children: 
[  750.902548] 
                 174 task ipv6_addrconf
                children: 
[  750.902548] 
                 186 task kstrp
                children: 
[  750.902549] 
                 190 task kworker/u13:0
                children: 
[  750.902549] 
                 206 task charger_manager
                children: 
[  750.902550] 
                 207 task kworker/3:1H
                children: 
[  750.902550] 
                 246 task kworker/0:2
                children: 
[  750.902550] 
                 268 task scsi_eh_2
                children: 
[  750.902551] 
                 269 task scsi_tmf_2
                children: 
[  750.902551] 
                 271 task kworker/4:1H
                children: 
[  750.902552] 
                 273 task kworker/2:1H
                children: 
[  750.902552] 
                 274 task kworker/1:1H
                children: 
[  750.902553] 
                 294 task kworker/0:1H
                children: 
[  750.902553] 
                 296 task jbd2/sda1-8
                children: 
[  750.902553] 
                 297 task ext4-rsv-conver
                children: 
[  750.902554] 
                 310 task kworker/3:2
                children: 
[  750.902554] 
                 311 task kworker/5:1H
                children: 
[  750.902555] 
                 330 task kworker/5:2
                children: 
[  750.902555] 
                 336 task systemd-journal
                children: 
[  750.902556] 
                 356 task systemd-udevd
                children: 
[  750.902556] 
                 361 task loop0
                children: 
[  750.902556] 
                 366 task loop1
                children: 
[  750.902557] 
                 377 task loop2
                children: 
[  750.902557] 
                 379 task loop3
                children: 
[  750.902558] 
                 388 task loop4
                children: 
[  750.902558] 
                 415 task iprt-VBoxWQueue
                children: 
[  750.902559] 
                 420 task loop7
                children: 
[  750.902559] 
                 430 task loop8
                children: 
[  750.902559] 
                 436 task loop9
                children: 
[  750.902560] 
                 443 task cryptd
                children: 
[  750.902560] 
                 445 task loop10
                children: 
[  750.902561] 
                 466 task loop11
                children: 
[  750.902561] 
                 485 task loop12
                children: 
[  750.902562] 
                 509 task loop13
                children: 
[  750.902562] 
                 511 task loop14
                children: 
[  750.902563] 
                 514 task loop15
                children: 
[  750.902563] 
                 535 task loop17
                children: 
[  750.902563] 
                 540 task loop20
                children: 
[  750.902564] 
                 542 task loop22
                children: 
[  750.902564] 
                 543 task loop23
                children: 
[  750.902565] 
                 544 task loop24
                children: 
[  750.902565] 
                 570 task systemd-resolve
                children: 
[  750.902566] 
                 708 task dbus-daemon
                children: 
[  750.902566] 
                 709 task anacron
                children: 
[  750.902567] 
                 711 task acpid
                children: 
[  750.902567] 
                 713 task NetworkManager
                children: 
[  750.902568]   913 dhclient
[  750.902568] 
                 714 task udisksd
                children: 
[  750.902569] 
                 715 task wpa_supplicant
                children: 
[  750.902569] 
                 717 task networkd-dispat
                children: 
[  750.902570] 
                 719 task accounts-daemon
                children: 
[  750.902570] 
                 721 task avahi-daemon
                children: 
[  750.902571]   751 avahi-daemon
[  750.902571] 
                 724 task snapd
                children: 
[  750.902572] 
                 725 task irqbalance
                children: 
[  750.902572] 
                 727 task cron
                children: 
[  750.902573] 
                 730 task ModemManager
                children: 
[  750.902573] 
                 731 task rsyslogd
                children: 
[  750.902574] 
                 737 task systemd-logind
                children: 
[  750.902574] 
                 751 task avahi-daemon
                children: 
[  750.902575] 
                 786 task polkitd
                children: 
[  750.902575] 
                 833 task unattended-upgr
                children: 
[  750.902576] 
                 913 task dhclient
                children: 
[  750.902576] 
                 927 task whoopsie
                children: 
[  750.902577] 
                 945 task kerneloops
                children: 
[  750.902577] 
                 951 task kerneloops
                children: 
[  750.902578] 
                1059 task gdm3
                children: 
[  750.902578]  1088 gdm-session-wor
[  750.902579] 
                1088 task gdm-session-wor
                children: 
[  750.902579]  1129 gdm-x-session
[  750.902580] 
                1094 task systemd
                children: 
[  750.902580]  1095 (sd-pam)
[  750.902581]  1491 dbus-daemon
[  750.902582]  1655 at-spi-bus-laun
[  750.902582]  1662 at-spi2-registr
[  750.902583]  1732 gvfsd
[  750.902583]  1737 gvfsd-fuse
[  750.902584]  1772 xdg-permission-
[  750.902584]  1781 ibus-portal
[  750.902585]  1795 evolution-sourc
[  750.902586]  1790 gnome-shell-cal
[  750.902586]  1818 gvfs-udisks2-vo
[  750.902586]  1822 gvfs-mtp-volume
[  750.902587]  1836 gvfs-afc-volume
[  750.902587]  1832 goa-identity-se
[  750.902588]  1802 goa-daemon
[  750.902588]  1841 gvfs-goa-volume
[  750.902589]  1847 gvfs-gphoto2-vo
[  750.902590]  2025 evolution-calen
[  750.902590]  2048 dconf-service
[  750.902591]  2085 evolution-addre
[  750.902591]  2114 gvfsd-metadata
[  750.902592]  26425 nautilus
[  750.902593]  32732 code
[  750.902593]   319 chrome_crashpad
[  750.902594]   339 xdg-desktop-por
[  750.902594]   343 xdg-document-po
[  750.902595]   360 xdg-desktop-por
[  750.902595]  9811 cpptools-srv
[  750.902596] 
                1095 task (sd-pam)
                children: 
[  750.902596] 
                1114 task gnome-keyring-d
                children: 
[  750.902597] 
                1129 task gdm-x-session
                children: 
[  750.902597]  1131 Xorg
[  750.902598]  1497 gnome-session-b
[  750.902598] 
                1131 task Xorg
                children: 
[  750.902599] 
                1346 task packagekitd
                children: 
[  750.902599] 
                1491 task dbus-daemon
                children: 
[  750.902600] 
                1497 task gnome-session-b
                children: 
[  750.902600]  1638 ssh-agent
[  750.902601]  1704 gnome-shell
[  750.902601]  1853 gsd-power
[  750.902602]  1855 gsd-print-notif
[  750.902602]  1856 gsd-rfkill
[  750.902603]  1858 gsd-screensaver
[  750.902603]  1863 gsd-sharing
[  750.902604]  1864 gsd-smartcard
[  750.902605]  1867 gsd-sound
[  750.902605]  1872 gsd-xsettings
[  750.902606]  1877 gsd-wacom
[  750.902606]  1884 gsd-a11y-settin
[  750.902607]  1885 gsd-clipboard
[  750.902607]  1887 gsd-color
[  750.902608]  1891 gsd-datetime
[  750.902608]  1893 gsd-housekeepin
[  750.902609]  1900 gsd-keyboard
[  750.902609]  1903 gsd-media-keys
[  750.902610]  1906 gsd-mouse
[  750.902610]  1952 nautilus-deskto
[  750.902611]  1956 gsd-disk-utilit
[  750.902611]  2228 gnome-software
[  750.902612]  2230 update-notifier
[  750.902612] 
                1595 task VBoxClient
                children: 
[  750.902613]  1596 VBoxClient
[  750.902613] 
                1596 task VBoxClient
                children: 
[  750.902614] 
                1610 task VBoxClient
                children: 
[  750.902614]  1611 VBoxClient
[  750.902615] 
                1611 task VBoxClient
                children: 
[  750.902615] 
                1618 task VBoxClient
                children: 
[  750.902616]  1619 VBoxClient
[  750.902616] 
                1619 task VBoxClient
                children: 
[  750.902617] 
                1636 task VBoxClient
                children: 
[  750.902617]  1637 VBoxClient
[  750.902618] 
                1637 task VBoxClient
                children: 
[  750.902618] 
                1638 task ssh-agent
                children: 
[  750.902619] 
                1655 task at-spi-bus-laun
                children: 
[  750.902619]  1660 dbus-daemon
[  750.902620] 
                1660 task dbus-daemon
                children: 
[  750.902620] 
                1662 task at-spi2-registr
                children: 
[  750.902621] 
                1704 task gnome-shell
                children: 
[  750.902621]  1767 ibus-daemon
[  750.902621] 
                1710 task upowerd
                children: 
[  750.902622] 
                1732 task gvfsd
                children: 
[  750.902622]  2011 gvfsd-trash
[  750.902623] 
                1737 task gvfsd-fuse
                children: 
[  750.902623] 
                1748 task pulseaudio
                children: 
[  750.902624] 
                1749 task rtkit-daemon
                children: 
[  750.902624] 
                1767 task ibus-daemon
                children: 
[  750.902625]  1771 ibus-dconf
[  750.902625]  2054 ibus-engine-sim
[  750.902626] 
                1771 task ibus-dconf
                children: 
[  750.902626] 
                1772 task xdg-permission-
                children: 
[  750.902627] 
                1774 task ibus-x11
                children: 
[  750.902627] 
                1781 task ibus-portal
                children: 
[  750.902628] 
                1790 task gnome-shell-cal
                children: 
[  750.902628] 
                1795 task evolution-sourc
                children: 
[  750.902628] 
                1802 task goa-daemon
                children: 
[  750.902629] 
                1804 task boltd
                children: 
[  750.902629] 
                1818 task gvfs-udisks2-vo
                children: 
[  750.902630] 
                1822 task gvfs-mtp-volume
                children: 
[  750.902630] 
                1832 task goa-identity-se
                children: 
[  750.902631] 
                1836 task gvfs-afc-volume
                children: 
[  750.902631] 
                1841 task gvfs-goa-volume
                children: 
[  750.902632] 
                1847 task gvfs-gphoto2-vo
                children: 
[  750.902632] 
                1853 task gsd-power
                children: 
[  750.902632] 
                1855 task gsd-print-notif
                children: 
[  750.902633] 
                1856 task gsd-rfkill
                children: 
[  750.902633] 
                1858 task gsd-screensaver
                children: 
[  750.902634] 
                1863 task gsd-sharing
                children: 
[  750.902634] 
                1864 task gsd-smartcard
                children: 
[  750.902635] 
                1867 task gsd-sound
                children: 
[  750.902635] 
                1872 task gsd-xsettings
                children: 
[  750.902636] 
                1877 task gsd-wacom
                children: 
[  750.902636] 
                1884 task gsd-a11y-settin
                children: 
[  750.902636] 
                1885 task gsd-clipboard
                children: 
[  750.902637] 
                1887 task gsd-color
                children: 
[  750.902637] 
                1891 task gsd-datetime
                children: 
[  750.902638] 
                1893 task gsd-housekeepin
                children: 
[  750.902638] 
                1900 task gsd-keyboard
                children: 
[  750.902639] 
                1903 task gsd-media-keys
                children: 
[  750.902639] 
                1906 task gsd-mouse
                children: 
[  750.902640] 
                1924 task gsd-printer
                children: 
[  750.902640] 
                1947 task colord
                children: 
[  750.902640] 
                1952 task nautilus-deskto
                children: 
[  750.902641] 
                1956 task gsd-disk-utilit
                children: 
[  750.902641] 
                2011 task gvfsd-trash
                children: 
[  750.902642] 
                2025 task evolution-calen
                children: 
[  750.902642]  2063 evolution-calen
[  750.902643] 
                2048 task dconf-service
                children: 
[  750.902643] 
                2054 task ibus-engine-sim
                children: 
[  750.902644] 
                2063 task evolution-calen
                children: 
[  750.902644] 
                2085 task evolution-addre
                children: 
[  750.902645]  2097 evolution-addre
[  750.902645] 
                2097 task evolution-addre
                children: 
[  750.902645] 
                2114 task gvfsd-metadata
                children: 
[  750.902646] 
                2209 task kworker/4:3
                children: 
[  750.902646] 
                2212 task kworker/4:4
                children: 
[  750.902647] 
                2228 task gnome-software
                children: 
[  750.902647] 
                2230 task update-notifier
                children: 
[  750.902648] 
                2250 task fwupd
                children: 
[  750.902648] 
                2429 task kworker/1:4
                children: 
[  750.902648] 
                2431 task kworker/1:5
                children: 
[  750.902649] 
                13205 task kworker/3:4
                children: 
[  750.902649] 
                13206 task kworker/3:5
                children: 
[  750.902650] 
                13208 task kworker/3:6
                children: 
[  750.902650] 
                13419 task kworker/0:3
                children: 
[  750.902651] 
                13421 task kworker/0:4
                children: 
[  750.902651] 
                13422 task kworker/0:5
                children: 
[  750.902651] 
                26425 task nautilus
                children: 
[  750.902652] 
                26580 task kworker/5:3
                children: 
[  750.902652] 
                26723 task kworker/2:6
                children: 
[  750.902653] 
                32732 task code
                children: 
[  750.902653]  32739 code
[  750.902654]  32740 code
[  750.902654] 
                32739 task code
                children: 
[  750.902655]   353 code
[  750.902655] 
                32740 task code
                children: 
[  750.902656]  32742 code
[  750.902656] 
                32742 task code
                children: 
[  750.902657]   404 code
[  750.902657] 
                 319 task chrome_crashpad
                children: 
[  750.902657] 
                 339 task xdg-desktop-por
                children: 
[  750.902658] 
                 343 task xdg-document-po
                children: 
[  750.902659] 
                 353 task code
                children: 
[  750.902659] 
                 360 task xdg-desktop-por
                children: 
[  750.902660] 
                 393 task code
                children: 
[  750.902660] 
                 404 task code
                children: 
[  750.902661] 
                 447 task code
                children: 
[  750.902661]   488 code
[  750.902661] 
                 461 task code
                children: 
[  750.902662]  1276 cpptools
[  750.902663] 
                 488 task code
                children: 
[  750.902663]  6377 bash
[  750.902664]  11431 sh
[  750.902664] 
                 587 task code
                children: 
[  750.902664] 
                1276 task cpptools
                children: 
[  750.902665] 
                6377 task bash
                children: 
[  750.902666]  11437 sudo
[  750.902666] 
                8271 task cupsd
                children: 
[  750.902666] 
                8272 task cups-browsed
                children: 
[  750.902667] 
                8957 task kworker/u12:3
                children: 
[  750.902667] 
                8977 task kworker/3:7
                children: 
[  750.902668] 
                9147 task VBoxService
                children: 
[  750.902668] 
                9811 task cpptools-srv
                children: 
[  750.902669] 
                9850 task update-notifier
                children: 
[  750.902669]  9852 sleep
[  750.902670] 
                9852 task sleep
                children: 
[  750.902670] 
                10104 task kworker/0:6
                children: 
[  750.902671] 
                10106 task kworker/0:7
                children: 
[  750.902671] 
                10107 task loop25
                children: 
[  750.902672] 
                10134 task loop26
                children: 
[  750.902672] 
                10171 task kworker/5:0
                children: 
[  750.902673] 
                10172 task kworker/5:1
                children: 
[  750.902673] 
                10173 task kworker/5:4
                children: 
[  750.902673] 
                10174 task kworker/5:5
                children: 
[  750.902674] 
                10175 task kworker/5:6
                children: 
[  750.902674] 
                10201 task kworker/2:1
                children: 
[  750.902675] 
                10202 task kworker/2:2
                children: 
[  750.902675] 
                10203 task kworker/2:3
                children: 
[  750.902676] 
                10204 task kworker/2:4
                children: 
[  750.902676] 
                10205 task kworker/2:5
                children: 
[  750.902676] 
                10417 task kworker/2:7
                children: 
[  750.902677] 
                10418 task loop18
                children: 
[  750.902677] 
                10475 task kworker/4:0
                children: 
[  750.902678] 
                10478 task kworker/4:1
                children: 
[  750.902678] 
                10479 task kworker/4:2
                children: 
[  750.902679] 
                10481 task kworker/4:5
                children: 
[  750.902679] 
                10484 task loop19
                children: 
[  750.902679] 
                10528 task kworker/1:0
                children: 
[  750.902680] 
                10529 task kworker/1:1
                children: 
[  750.902680] 
                10530 task kworker/1:2
                children: 
[  750.902681] 
                10531 task kworker/1:3
                children: 
[  750.902681] 
                10532 task kworker/1:6
                children: 
[  750.902681] 
                10667 task loop21
                children: 
[  750.902682] 
                10832 task loop5
                children: 
[  750.902682] 
                11431 task sh
                children: 
[  750.902683]  11432 cpuUsage.sh
[  750.902683] 
                11432 task cpuUsage.sh
                children: 
[  750.902684]  11435 sleep
[  750.902684] 
                11435 task sleep
                children: 
[  750.902685] 
                11437 task sudo
                children: 
[  750.902685]  11438 insmod
