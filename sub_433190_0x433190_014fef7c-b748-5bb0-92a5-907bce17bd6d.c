// ============================================================
// 函数名称: sub_433190
// 虚拟地址: 0x433190
// WARP GUID: 014fef7c-b748-5bb0-92a5-907bce17bd6d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ImageList_DragShowNolock
// [内部子函数调用]: sub_437154
// [被调用的父级函数]: sub_4290c0
// ============================================================

int32_t __convention("regparm")sub_433190(void* arg1)
{
    // 第一条实际指令: char result = sub_437154(arg1)
    char result = sub_437154(arg1)
    
    if (result == 0)
        return result
    
    return ImageList_DragShowNolock(0)
}
