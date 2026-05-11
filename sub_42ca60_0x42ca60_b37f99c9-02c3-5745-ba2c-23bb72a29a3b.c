// ============================================================
// 函数名称: sub_42ca60
// 虚拟地址: 0x42ca60
// WARP GUID: b37f99c9-02c3-5745-ba2c-23bb72a29a3b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42abc0
// [被调用的父级函数]: sub_4250f0, sub_4b4cf3
// ============================================================

void __convention("regparm")sub_42ca60(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x10a) != 0 && sub_42abc0(arg1) != 0 && *(sub_42abc0(arg1) + 0x30) != *(arg1 + 0x108))
    if (*(arg1 + 0x10a) != 0 && sub_42abc0(arg1) != 0 && *(sub_42abc0(arg1) + 0x30) != *(arg1 + 0x108))
        *(arg1 + 0x10c)
        (*(arg1 + 0x108))()
        return 
    
    if ((*(arg1 + 0x20) & 0x10) == 0 && *(arg1 + 0x5c) != 0)
        (*(**(arg1 + 0x5c) + 0x18))()
    else if (*(arg1 + 0x10a) != 0)
        *(arg1 + 0x10c)
        (*(arg1 + 0x108))()
}
