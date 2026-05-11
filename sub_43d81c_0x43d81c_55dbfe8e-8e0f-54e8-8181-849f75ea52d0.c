// ============================================================
// 函数名称: sub_43d81c
// 虚拟地址: 0x43d81c
// WARP GUID: 55dbfe8e-8e0f-54e8-8181-849f75ea52d0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DrawMenuBar, SendMessageA
// [内部子函数调用]: sub_43d1a0, sub_43d318
// [被调用的父级函数]: 无
// ============================================================

int32_t* __thiscallsub_43d81c(int32_t arg1, LRESULT arg2 @ eax, char arg3)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    int32_t edx
    int32_t var_8_1 = edx
    int32_t* edi = arg2
    
    if (edi[0xb] != 0)
        char ebx_1 = sub_43d1a0(edi).b
        
        if (arg1 == 0)
            SendMessageA(edi[0xb], 0xb015, 0, 0)
        
        if (ebx_1 != 0)
            DrawMenuBar(edi[0xb])
    
    arg2.b = arg3
    return sub_43d318(edi, arg2.b)
}
