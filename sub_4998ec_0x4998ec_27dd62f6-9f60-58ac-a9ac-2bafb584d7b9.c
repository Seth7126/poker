// ============================================================
// 函数名称: sub_4998ec
// 虚拟地址: 0x4998ec
// WARP GUID: 27dd62f6-9f60-58ac-a9ac-2bafb584d7b9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_40ac70, sub_404138, sub_403e4c, sub_40b4b0, sub_403e1c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4998ec(char* arg1, char* arg2, void* arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi, char* arg6 @ edi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1.b ^= 0x99
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg5 - 0x67) += (arg3 - 1).b
    char* entry_ebx
    *arg1 += entry_ebx.b
    *arg1 += arg1.b
    arg1[0xf4004988] += arg1:1.b
    arg1.b ^= *arg1
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (&arg1[1]).b
    arg1[2] += (arg3 - 2).b
    char* eax_2 = &arg1[2] ^ *(arg1 + 2)
    eax_2.b ^= *eax_2
    TEB* fsbase
    char temp0_1 = *(fsbase + eax_2) ^ eax_2.b
    *(fsbase + eax_2) = temp0_1
    
    if (temp0_1 s< 0)
        return sub_499960(eax_2, arg2, arg3 - 2) __tailcall
    
    arg1.b = (&eax_2[1]).b * 2
    *arg1 ^= arg1.b
    int32_t* esp
    int16_t cs
    *(esp - 4) = zx.d(cs)
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg2 += arg1.b
    *arg1 += arg1.b
    *(arg1 + arg2 + 0x100040) += entry_ebx:1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg6 += (arg3 - 2).b
    arg4 += 1
    *0x1400400c = arg6
    *0x14004008 = entry_ebx
    esp = 0x14004008
    char temp1_1 = arg2.b
    arg2.b ^= entry_ebx[0x74]
    
    if (temp1_1 != entry_ebx[0x74])
        goto label_4999be
    
    arg4 += 1
    int32_t eflags
    arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
    *(arg4 - 0x75) = rlc.b(*(arg4 - 0x75), 0xec, false)
    *0x14004004 = 0
    *0x14004000 = 0
    *0x14003ffc = 0
    *0x14003ff8 = entry_ebx
    *0x14003ff4 = arg5
    *0x14003ff0 = arg6
    int32_t esp_1 = 0x14003ff0
    
    if (arg2.b != 0)
        esp_1 = 0x14003fe0
        arg1 = sub_4033d0(arg3 - 3, arg2)
    
    arg6 = arg3 - 3
    *(arg4 - 1) = arg2.b
    entry_ebx = arg1
    uint32_t esi = *(arg4 + 8)
    *(esp_1 - 4) = arg4
    *(esp_1 - 8) = j_sub_4037f0
    *(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
    esp = esp_1 - 0xc
    fsbase->NtTib.ExceptionList = esp
    sub_403e4c(&entry_ebx[0x14], arg6)
    *(entry_ebx + 0xc) = esi
    
    if (esi != 0)
        sub_40ac70(esi, arg4 - 8)
        arg2 = *(arg4 - 8)
    label_4999be:
        sub_403e4c(&entry_ebx[0x10], arg2)
        *(esp - 4) = arg6
        *(esp - 8) = &data_499a34
        *(esp - 0xc) = *(entry_ebx + 0x10)
        sub_404138(arg4 - 0xc, 3)
        sub_40b4b0(entry_ebx, 0, *(arg4 - 0xc))
    else
        sub_40b4b0(entry_ebx, 0, arg6)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_499a07
    return sub_403e1c(arg4 - 0xc, 2)
}
