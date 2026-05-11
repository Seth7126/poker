// ============================================================
// 函数名称: sub_443970
// 虚拟地址: 0x443970
// WARP GUID: 12df2d6e-7dc8-565d-8c89-98835ad42f8c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42ee80
// [被调用的父级函数]: sub_47d208
// ============================================================

void* __convention("regparm")sub_443970(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    var_8.b = arg2
    void* ebx = arg1
    arg1.b = var_8.b
    
    if (arg1.b != *(ebx + 0x210))
        arg1.b = var_8.b
        *(ebx + 0x210) = arg1.b
        
        if ((*(ebx + 0x20) & 0x10) == 0)
            return sub_42ee80(ebx)
    
    return arg1
}
