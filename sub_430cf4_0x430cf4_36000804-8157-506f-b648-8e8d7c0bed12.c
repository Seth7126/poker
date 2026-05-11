// ============================================================
// 函数名称: sub_430cf4
// 虚拟地址: 0x430cf4
// WARP GUID: 36000804-8157-506f-b648-8e8d7c0bed12
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42e898, sub_42d07c, sub_42ee80
// [被调用的父级函数]: sub_44228c
// ============================================================

int32_t __convention("regparm")sub_430cf4(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx = sub_42d07c(arg1, arg2)
    int32_t ecx = sub_42d07c(arg1, arg2)
    
    if (*(data_530a80 + 9) != 0 && *(arg2 + 4) == 0)
        ecx = sub_42ee80(arg1)
    
    return sub_42e898(ecx, 0xb03d)
}
