// ============================================================
// 函数名称: sub_420453
// 虚拟地址: 0x420453
// WARP GUID: 1cdd0e3b-99b7-5eae-97fc-957c14a61137
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __stdcallsub_420453(int32_t arg1 @ ebp, void* arg2 @ esi, void* arg3 @ edi, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    char* eax_4
    char ecx_1
    uint16_t edx_1
    eax_4, edx_1, ecx_1 = (*eax)()
    *eax_4 += eax_4.b
    char temp1 = *(arg3 + 0x65)
    *(arg3 + 0x65) += eax_4.b
    bool cond:2 = temp1 s<= neg.b(eax_4.b)
    void* result
    void* esp
    void arg_c
    void* entry_ebx
    
    if (temp1 == neg.b(eax_4.b))
        if (*(entry_ebx + 8) s<= 0 || *(entry_ebx + 0xc) s<= 0)
            result = arg2
            esp = &arg_c
        else
            int32_t var_4_1 = 0
            cond:2 = data_5316c4(0) s<= *entry_ebx
        label_4204c5:
            
            if (cond:2)
                result = arg2
                esp = &arg_c
            else
                int32_t var_4_2 = 1
                
                if (data_5316c4(1) s> *(entry_ebx + 4))
                    arg2 = 0x12340042
                
                result = arg2
                esp = &arg_c
    else if (temp1 + eax_4.b s>= 0)
        eax_4.b += 0x7e
        result = &eax_4[0x340042be]
        *(entry_ebx + 0x5b5e5fc6)
    else
        if (temp1 == neg.b(eax_4.b))
            goto label_4204c5
        
        int32_t eflags
        int32_t* edi
        int32_t temp0_1
        temp0_1, edi = __insd(arg3, edx_1, eflags)
        *edi = temp0_1
        
        if (arg1 != 1)
            return sub_42046c() __tailcall
        
        eax_4.b ^= 0x12
        result = arg2
        esp = &arg_c
    *esp
    return result
}
