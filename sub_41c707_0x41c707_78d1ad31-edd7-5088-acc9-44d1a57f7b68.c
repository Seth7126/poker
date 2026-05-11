// ============================================================
// 函数名称: sub_41c707
// 虚拟地址: 0x41c707
// WARP GUID: 78d1ad31-edd7-5088-acc9-44d1a57f7b68
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: MulDiv
// [内部子函数调用]: sub_41c7a4, sub_41ca88, sub_41c9fc
// [被调用的父级函数]: 无
// ============================================================

void __thiscallsub_41c707(int32_t arg1, int32_t* arg2 @ eax, int32_t arg3 @ esi, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: *(arg2 * 2) += 1
    *(arg2 * 2) += 1
    char temp0 = *arg2
    *arg2 += arg2.b
    
    if (temp0 != neg.b(arg2.b) && temp0 + arg2.b u>= temp0)
        *arg2 += arg2.b
        int32_t* entry_ebx
        char temp1 = entry_ebx.b
        entry_ebx.b += arg1:1.b
        arg2:1.b = sbb.b(arg2:1.b, *(arg1 + &data_53165c), temp1 + arg1:1.b u< temp1)
        sub_41c7a4(entry_ebx, MulDiv(arg3, 0x9ec, arg2))
        return 
    
    *arg2 += arg2.b
    *arg2 += arg2.b
    
    if (arg2[8] == 0)
        return 
    
    int32_t* edx
    
    if (arg2[9].b == 0)
        sub_41ca88(arg2, edx)
    else
        sub_41c9fc(arg2, edx)
}
