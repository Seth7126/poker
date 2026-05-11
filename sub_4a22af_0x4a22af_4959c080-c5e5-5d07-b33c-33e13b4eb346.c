// ============================================================
// 函数名称: sub_4a22af
// 虚拟地址: 0x4a22af
// WARP GUID: 4959c080-c5e5-5d07-b33c-33e13b4eb346
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49f520, sub_408ebc, sub_403e4c, sub_40cc98, sub_4a1b34, sub_403e1c, sub_49df54
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4a22af(int32_t* arg1, int32_t arg2, void* arg3 @ ebp, int32_t arg4 @ edi)
{
    // 第一条实际指令: *arg1 -= 1
    *arg1 -= 1
    *arg1 += arg1.b
    char temp0 = *(arg1 + 0x61)
    *(arg1 + 0x61) += arg2.b
    bool c = temp0 + arg2.b u< temp0
    int32_t* entry_ebx
    int32_t (** esp)(void* arg1, void* arg2)
    TEB* fsbase
    
    if (not(c))
        *(esp - 4) = *(fsbase + arg1)
        esp -= 4
    else if (temp0 != neg.b(arg2.b) && not(c))
        *(arg4 * 9 + 0x30) += arg1:1.b
    else
        int32_t (* var_c)(void* arg1, void* arg2)
        int32_t (* esi)(void* arg1, void* arg2)
        
        if (not(c))
            *arg1 += arg1.b
            *arg1 += arg1.b
            void* var_4_1 = arg3
            int32_t* var_8_1 = entry_ebx
            var_c = esi
            
            if (arg2 != arg1[3])
                sub_40cc98(&arg1[1])
            
            arg1[3] = arg2
            return 
        
        int32_t (* var_4_2)(void* arg1, void* arg2) = esi
        entry_ebx = arg1
        arg1 = nullptr
        void* var_8_2 = arg3
        var_c = j_sub_4037f0
        esp = &var_c
        *(esp - 4) = *(fsbase + arg1)
        esp -= 4
    
    *(fsbase + arg1) = esp
    int32_t* esi_3 = entry_ebx[2]
    sub_49f520(esi_3, "Accept")
    sub_403e4c(&entry_ebx[0x14], *(arg3 - 8))
    sub_49f520(esi_3, "Accept-Charset")
    sub_403e4c(&entry_ebx[0x15], *(arg3 - 0xc))
    sub_49f520(esi_3, "Accept-Encoding")
    sub_403e4c(&entry_ebx[0x16], *(arg3 - 0x10))
    sub_49f520(esi_3, "Accept-Language")
    sub_403e4c(&entry_ebx[0x17], *(arg3 - 0x14))
    sub_49f520(esi_3, "Host")
    sub_403e4c(&entry_ebx[0x1e], *(arg3 - 0x18))
    sub_49f520(esi_3, "From")
    sub_403e4c(&entry_ebx[0x19], *(arg3 - 0x1c))
    sub_49f520(esi_3, "Referer")
    sub_403e4c(&entry_ebx[0x1b], *(arg3 - 0x20))
    sub_49f520(esi_3, "User-Agent")
    sub_403e4c(&entry_ebx[0x1c], *(arg3 - 0x24))
    sub_49f520(esi_3, "Range")
    
    if (*(arg3 - 4) != 0)
        *(esp - 4) = 1
        *(esp - 8) = arg3 - 0x28
        int32_t ecx_9
        ecx_9.b = 1
        sub_49df54(ecx_9, &data_4a2558, arg3 - 4)
        *(esp - 4) = 1
        *(esp - 8) = arg3 - 0x2c
        int32_t ecx_10
        ecx_10.b = 1
        int32_t ecx_11 = sub_49df54(ecx_10, &data_4a2564, arg3 - 4)
        *(arg3 - 0x2c)
        int32_t eax_23
        int32_t ecx_12
        eax_23, ecx_12 = sub_408ebc(ecx_11, 0)
        entry_ebx[8] = eax_23
        *(esp - 4) = 1
        *(esp - 8) = arg3 - 0x30
        ecx_12.b = 1
        int32_t ecx_13 = sub_49df54(ecx_12, &data_4a2570, arg3 - 4)
        *(arg3 - 0x30)
        entry_ebx[7] = sub_408ebc(ecx_13, 0)
    
    long double x87_r0
    long double x87_r1
    long double x87_r2
    sub_4a1b34(entry_ebx, esi_3, arg4, x87_r0, x87_r1, x87_r2)
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4a249b
    sub_403e1c(arg3 - 0x30, 0xc)
}
