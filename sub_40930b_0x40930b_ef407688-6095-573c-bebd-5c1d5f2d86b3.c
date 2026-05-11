// ============================================================
// 函数名称: sub_40930b
// 虚拟地址: 0x40930b
// WARP GUID: ef407688-6095-573c-bebd-5c1d5f2d86b3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetDiskFreeSpaceA
// [内部子函数调用]: sub_4067e4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_40930b(char* arg1, int32_t arg2, int16_t arg3, int32_t arg4 @ ebp, char* arg5 @ esi)
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    *entry_ebx += 1
    *arg1 += arg1.b
    *arg5 += arg3:1.b
    *arg1
    *(__return_addr - 4) = arg4
    *(__return_addr - 0x20) = entry_ebx
    int32_t eax = *(__return_addr + 4)
    
    if (eax == 0)
        eax = 0
    
    *(__return_addr - 0x24) = __return_addr - 0x14
    *(__return_addr - 0x28) = __return_addr - 0x10
    *(__return_addr - 0x2c) = __return_addr - 0xc
    *(__return_addr - 0x30) = __return_addr - 8
    *(__return_addr - 0x34) = eax
    int32_t result
    int32_t ecx
    result, ecx = GetDiskFreeSpaceA()
    *(__return_addr - 0x1c) = *(__return_addr - 8) * *(__return_addr - 0xc)
    *(__return_addr - 0x18) = 0
    int32_t eax_3 = *(__return_addr - 0x10)
    *(__return_addr - 0x24) = 0
    *(__return_addr - 0x28) = eax_3
    int32_t eax_5
    int32_t edx_5
    eax_5, edx_5 = sub_4067e4(ecx, *(__return_addr - 0x18), *(__return_addr - 0x1c))
    int32_t* ecx_1 = *(__return_addr + 8)
    *ecx_1 = eax_5
    ecx_1[1] = edx_5
    int32_t eax_6 = *(__return_addr - 0x14)
    *(__return_addr - 0x24) = 0
    *(__return_addr - 0x28) = eax_6
    int32_t eax_8
    int32_t edx_7
    eax_8, edx_7 = sub_4067e4(ecx_1, *(__return_addr - 0x18), *(__return_addr - 0x1c))
    int32_t* ecx_2 = *(__return_addr + 0xc)
    *ecx_2 = eax_8
    ecx_2[1] = edx_7
    *(__return_addr - 0x20)
    *(__return_addr - 4)
    return result
}
