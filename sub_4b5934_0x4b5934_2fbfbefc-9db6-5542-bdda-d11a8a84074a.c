// ============================================================
// 函数名称: sub_4b5934
// 虚拟地址: 0x4b5934
// WARP GUID: 2fbfbefc-9db6-5542-bdda-d11a8a84074a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4b5976, sub_4b59d2
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_4b5934(char arg1, uint16_t arg2, char* arg3 @ eax, uint16_t* arg4 @ esi, char arg5)
{
    // 第一条实际指令: *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    char temp0 = *arg3
    *arg3 += arg3.b
    int32_t entry_ebx
    void* ebp
    void* edi
    TEB* fsbase
    
    if (temp0 s>= neg.b(arg3.b))
        *arg3 += arg2.b
        *arg3 += arg3.b
        void* const eax
        eax:1.b = __return_addr:1.b + arg2:1.b
        eax.b ^= *eax
        *(entry_ebx - 2) += arg2:1.b
        *(entry_ebx - 2 + arg4) += (eax + 1).b
        *(eax + 2) += arg1
        char* eax_3 = (eax + 2) ^ *(eax + 2)
        eax_3.b ^= *eax_3
        char temp2 = *(fsbase + eax_3) ^ eax_3.b
        *(fsbase + eax_3) = temp2
        
        if (temp2 s< 0)
            jump(0x4b59a6)
        
        return sub_4b5976(eax_3, arg2, arg1, ebp, arg4, edi) __tailcall
    
    arg2.b += arg2:1.b
    *arg3 += (entry_ebx - 1).b
    *arg3 += arg3.b
    *arg3 += arg2:1.b
    arg3:1.b += arg2:1.b
    arg3.b ^= *arg3
    *(entry_ebx - 2) += arg2:1.b
    *(entry_ebx - 2 + arg4) += (&arg3[1]).b
    arg3[2] += arg5
    char* eax_7 = &arg3[2] ^ *(arg3 + 2)
    eax_7.b ^= *eax_7
    char temp1 = *(fsbase + eax_7) ^ eax_7.b
    *(fsbase + eax_7) = temp1
    
    if (temp1 s< 0)
        undefined
    
    return sub_4b59d2(eax_7, arg2, arg5, ebp, arg4, edi) __tailcall
}
