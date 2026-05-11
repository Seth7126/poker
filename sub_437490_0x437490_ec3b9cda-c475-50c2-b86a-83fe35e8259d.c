// ============================================================
// 函数名称: sub_437490
// 虚拟地址: 0x437490
// WARP GUID: ec3b9cda-c475-50c2-b86a-83fe35e8259d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ImageList_GetImageCount
// [内部子函数调用]: sub_437290, sub_437154
// [被调用的父级函数]: sub_4374b4, sub_437c84, sub_437d74, sub_43ab7c, sub_43a2fc
// ============================================================

int32_t __convention("regparm")sub_437490(int32_t* arg1)
{
    // 第一条实际指令: if (sub_437154(arg1) == 0)
    if (sub_437154(arg1) == 0)
        return 0
    
    return ImageList_GetImageCount(sub_437290(arg1))
}
