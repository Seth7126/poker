// ============================================================
// 函数名称: sub_43bd70
// 虚拟地址: 0x43bd70
// WARP GUID: c19385e1-b331-58ab-b0d2-a9edff5bde03
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41dae0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_43bd70(void* arg1)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    
    if (*(arg1 + 0x40) == 0)
        edx.b = 1
        int32_t* eax
        eax, edx = sub_41dae0(sub_41799a+0xe2, edx)
        *(arg1 + 0x40) = eax
    
    edx.b = 1
    (*(**(arg1 + 0x40) + 0x3c))()
    return *(arg1 + 0x40)
}
