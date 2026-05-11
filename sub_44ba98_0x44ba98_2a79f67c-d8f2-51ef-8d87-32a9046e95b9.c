// ============================================================
// 函数名称: sub_44ba98
// 虚拟地址: 0x44ba98
// WARP GUID: 2a79f67c-d8f2-51ef-8d87-32a9046e95b9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_44ba00
// [被调用的父级函数]: 无
// ============================================================

void __thiscallsub_44ba98(int32_t arg1, int32_t* arg2 @ eax, int32_t arg3, int32_t arg4, int32_t arg5, char arg6)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    var_8:3.b = arg1.b
    int32_t* esi = arg2
    
    if ((*(esi + 0x13a) & arg5.b) != 0)
        if (sub_44ba00(esi) == 0)
            arg2, arg1 = (*(*esi + 0x84))()
        else
            arg2, arg1 = (*(*esi + 0x80))()
    
    if (*(esi + 0x132) == 0)
        return 
    
    arg2.b = arg6
    arg1.b = var_8:3.b
    esi[0x4d]
    esi[0x4c](arg3, arg4, arg5, arg2)
}
