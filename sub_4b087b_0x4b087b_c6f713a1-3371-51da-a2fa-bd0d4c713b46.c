// ============================================================
// 函数名称: sub_4b087b
// 虚拟地址: 0x4b087b
// WARP GUID: c6f713a1-3371-51da-a2fa-bd0d4c713b46
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a7ff0
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4b087b(char* arg1, void* arg2, void* arg3, uint16_t arg4 @ ebp, void* arg5 @ esi, char* arg6 @ edi)
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    *entry_ebx -= 1
    *arg1 += arg1.b
    char temp1 = *(entry_ebx + 0x65)
    *(entry_ebx + 0x65) += arg2.b
    char** esp
    
    if (temp1 == neg.b(arg2.b))
        *(arg3 + 0xe087) = ror.b(*(arg3 + 0xe087), 0)
    label_4b08b8:
        
        if (arg5 == *(arg6 + 0xf0))
            *(arg6 + 0xf0) = 0
    else
        int32_t eflags_1
        int16_t temp0_1
        temp0_1, eflags_1 = __arpl_memw_gpr16(*(arg6 + 0x6f), arg4)
        *(arg6 + 0x6f) = temp0_1
        void* ebp = *(arg3 + 0x65) * 0x32
        *(ebp - 0x75) += arg2.b
        arg1.b = __in_al_dx(arg2.w, eflags_1)
        int32_t* var_4_1 = entry_ebx
        void* var_8_1 = arg5
        char* var_c = arg6
        esp = &var_c
        char ebx = arg3.b
        arg5 = arg2
        arg6 = arg1
        sub_4a7ff0(arg6, arg5, ebx)
        
        if (ebx == 1)
            if (arg5 == *(arg6 + 0xe0))
                *(arg6 + 0xe0) = 0
            
            goto label_4b08b8
    
    *esp
    esp[1]
    esp[2]
    esp[3]
}
