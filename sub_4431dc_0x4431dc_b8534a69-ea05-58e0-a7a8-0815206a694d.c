// ============================================================
// 函数名称: sub_4431dc
// 虚拟地址: 0x4431dc
// WARP GUID: b8534a69-ea05-58e0-a7a8-0815206a694d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42b690, sub_444090
// [被调用的父级函数]: sub_4493c8, sub_443be4, sub_4425d8, sub_4462f4, sub_446b40, sub_442884, sub_4428ca, sub_4462ec, sub_446dd8
// ============================================================

void __convention("regparm")sub_4431dc(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if ((arg1[0xb3].b & 1) == 0)
    if ((arg1[0xb3].b & 1) == 0)
        if (arg2 != 0 && arg2 != *(arg1 + 0x47))
            sub_444090(arg1)
        
        sub_42b690(arg1, arg2)
    else
        if (arg2 == 0)
            arg1[0xb3].b &= 0xfd
            return 
        
        arg1[0xb3].b |= 2
}
