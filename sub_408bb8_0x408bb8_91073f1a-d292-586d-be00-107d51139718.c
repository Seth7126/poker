// ============================================================
// 函数名称: sub_408bb8
// 虚拟地址: 0x408bb8
// WARP GUID: 91073f1a-d292-586d-be00-107d51139718
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404280, sub_404078
// [被调用的父级函数]: sub_49f478, sub_49f368
// ============================================================

char** __convention("regparm")sub_408bb8(void* arg1, char** arg2)
{
    // 第一条实际指令: void* i
    void* i
    
    for (i = sub_404078(arg1); i s> 0; i -= 1)
        if (*(arg1 + i - 1) u> 0x20)
            break
    
    return sub_404280(i, 1, arg1, arg2)
}
