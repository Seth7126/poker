// ============================================================
// 函数名称: sub_443f38
// 虚拟地址: 0x443f38
// WARP GUID: e0c61107-8fe8-5a7d-9803-7d95a912c64d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42ee80
// [被调用的父级函数]: sub_44cd2c, sub_443be4
// ============================================================

void __convention("regparm")sub_443f38(void* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x218))
    if (arg2 == *(arg1 + 0x218))
        return 
    
    *(arg1 + 0x218) = arg2
    
    if ((*(arg1 + 0x20) & 0x10) == 0)
        sub_42ee80(arg1)
}
