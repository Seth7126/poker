// ============================================================
// 函数名称: sub_433110
// 虚拟地址: 0x433110
// WARP GUID: af1844ce-31e9-59a9-9877-e5c9ee943eaf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ImageList_DragLeave
// [内部子函数调用]: sub_437154
// [被调用的父级函数]: sub_4331a8, sub_4330ac
// ============================================================

int32_t __convention("regparm")sub_433110(void* arg1)
{
    // 第一条实际指令: char result = sub_437154(arg1)
    char result = sub_437154(arg1)
    
    if (result != 0 && *(arg1 + 0x64) != 0)
        ImageList_DragLeave(*(arg1 + 0x64))
        result = 0
        *(arg1 + 0x64) = 0
    
    return result
}
