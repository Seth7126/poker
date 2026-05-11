// ============================================================
// 函数名称: sub_433034
// 虚拟地址: 0x433034
// WARP GUID: dd1b24ac-3985-5278-b772-2ca11dbfc70c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_432f20
// [被调用的父级函数]: sub_4331a8, sub_4298b4
// ============================================================

void __convention("regparm")sub_433034(void* arg1, int16_t arg2)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x60))
    if (arg2 == *(arg1 + 0x60))
        return 
    
    *(arg1 + 0x60) = arg2
    int32_t ebp
    
    if (*(arg1 + 0x62) != 0)
        sub_432f20(arg1, ebp)
}
