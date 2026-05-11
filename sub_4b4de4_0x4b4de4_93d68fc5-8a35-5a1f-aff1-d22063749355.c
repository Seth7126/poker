// ============================================================
// 函数名称: sub_4b4de4
// 虚拟地址: 0x4b4de4
// WARP GUID: 93d68fc5-8a35-5a1f-aff1-d22063749355
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4b5228, sub_425bb4
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4b4de4(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == arg1[0x9b].b)
    if (arg2 == arg1[0x9b].b)
        return 
    
    arg1[0x9b].b = arg2
    
    if (arg1[0x9b].b == 1 && (*(*arg1[0x94] + 0x20))() + 1 s> sub_425bb4(arg1))
        sub_4b5228(arg1)
    
    (*(*arg1 + 0x74))()
}
