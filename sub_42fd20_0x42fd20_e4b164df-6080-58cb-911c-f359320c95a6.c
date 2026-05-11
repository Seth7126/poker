// ============================================================
// 函数名称: sub_42fd20
// 虚拟地址: 0x42fd20
// WARP GUID: e4b164df-6080-58cb-911c-f359320c95a6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_431bd8, sub_4032ac, sub_42e3c8
// [被调用的父级函数]: sub_426234, sub_491d94, sub_4420f4
// ============================================================

int32_t* __convention("regparm")sub_42fd20(int32_t* arg1)
{
    // 第一条实际指令: sub_431bd8(arg1)
    sub_431bd8(arg1)
    (*(*arg1 - 0x10))()
    int32_t* result = sub_42e3c8()
    
    if ((arg1[8].b & 1) != 0)
        return result
    
    int32_t* ebx
    ebx.w = 0xffd4
    return sub_4032ac(arg1)
}
