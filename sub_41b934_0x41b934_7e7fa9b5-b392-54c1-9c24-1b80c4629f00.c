// ============================================================
// 函数名称: sub_41b934
// 虚拟地址: 0x41b934
// WARP GUID: 7e7fa9b5-b392-54c1-9c24-1b80c4629f00
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032dc, sub_410524, sub_410414
// [被调用的父级函数]: sub_41bd2c
// ============================================================

void** __convention("regparm")sub_41b934(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void** result = *(arg1 + 4)
    void** result = *(arg1 + 4)
    int32_t i = result[2] - 1
    
    if (i s>= 0)
        do
            result = sub_4032dc(sub_410524(*(arg1 + 4), i), arg2)
            
            if (result.b != 0)
                sub_410414(*(arg1 + 4), i)
                result = sub_410414(*(arg1 + 8), i)
            
            i -= 1
        while (i != 0xffffffff)
    
    return result
}
