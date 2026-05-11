// ============================================================
// 函数名称: sub_441758
// 虚拟地址: 0x441758
// WARP GUID: 0922546b-acc3-5192-9bdb-b5b6a02649af
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_44173c
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_441758(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x2c))
    if (arg2 == *(arg1 + 0x2c))
        return 
    
    *(arg1 + 0x2c) = arg2
    
    if (arg2 != 0)
        sub_44173c(arg1, 0x80000014)
}
