// ============================================================
// 函数名称: sub_4331a8
// 虚拟地址: 0x4331a8
// WARP GUID: 645954e3-9072-5c95-a89a-f6804b598d60
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ImageList_EndDrag, ShowCursor
// [内部子函数调用]: sub_437154, sub_433110, sub_433034
// [被调用的父级函数]: sub_429f30, sub_4298b4
// ============================================================

int32_t __convention("regparm")sub_4331a8(void* arg1)
{
    // 第一条实际指令: int32_t entry_ebx
    int32_t entry_ebx
    int32_t var_4 = entry_ebx
    
    if (sub_437154(arg1) == 0 || *(arg1 + 0x62) == 0)
        return 0
    
    sub_433110(arg1)
    int32_t result = neg.d(sbb.d(entry_ebx, entry_ebx, ImageList_EndDrag() != 0))
    *(arg1 + 0x62) = 0
    sub_433034(arg1, 0xffff)
    ShowCursor(0xffffffff)
    return result
}
