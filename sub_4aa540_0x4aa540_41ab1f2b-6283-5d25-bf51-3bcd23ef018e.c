// ============================================================
// 函数名称: sub_4aa540
// 虚拟地址: 0x4aa540
// WARP GUID: 41ab1f2b-6283-5d25-bf51-3bcd23ef018e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4aa582
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4aa540(char* arg1, int16_t arg2, char arg3, void* arg4 @ ebp, uint16_t* arg5 @ esi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg4 + 0xc004a) = arg1:1.b
    *arg1 += arg1.b
    void* eax
    eax.b = 0xa1 ^ *0xf4004aa1
    char* entry_ebx
    *entry_ebx += arg2:1.b
    *(entry_ebx + arg5) += (eax + 1).b
    *(eax + 2) += arg3
    char* eax_3 = (eax + 2) ^ *(eax + 2)
    eax_3.b ^= *eax_3
    TEB* fsbase
    char temp0 = *(fsbase + eax_3) ^ eax_3.b
    *(fsbase + eax_3) = temp0
    
    if (temp0 s>= 0)
        int32_t* edi
        return sub_4aa582(eax_3, arg2, arg3, arg4, arg5, edi) __tailcall
    
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    *eax_3 += eax_3.b
    undefined
}
