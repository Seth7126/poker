// ============================================================
// 函数名称: sub_496eec
// 虚拟地址: 0x496eec
// WARP GUID: 1c8597eb-484d-548a-bd14-b90557cd4409
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA, GetCapture
// [内部子函数调用]: sub_40b3d8, sub_449678
// [被调用的父级函数]: sub_496fb0
// ============================================================

enum MESSAGEBOX_RESULT __convention("regparm")sub_496eec(void* arg1)
{
    // 第一条实际指令: if (GetCapture() != 0)
    if (GetCapture() != 0)
        SendMessageA(GetCapture(), 0x1f, 0, 0)
    
    void* eax_2 = *(arg1 + 0x38)
    
    if (eax_2 == 0)
        return sub_40b3d8()
    
    return sub_449678(*data_530660, eax_2)
}
