// ============================================================
// 函数名称: sub_42e7fc
// 虚拟地址: 0x42e7fc
// WARP GUID: 8e08aa40-b71b-5d68-8499-939e57389e5f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524
// [被调用的父级函数]: sub_441174, sub_42e1cc, sub_4318e4, sub_441c2c, sub_42eda0, sub_42e4a4, sub_4314c8, sub_434670, sub_42e3d0, sub_4337f8, sub_446c48, sub_434144, sub_42da58, sub_44688c, sub_446644, sub_431f30, sub_431e20, sub_430c34, sub_42e858, sub_431420, sub_42e078, sub_4323e0, sub_4309f4, sub_44678c
// ============================================================

int32_t __convention("regparm")sub_42e7fc(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* ebp = *(arg1 + 0x134)
    int32_t* ebp = *(arg1 + 0x134)
    int32_t esi
    
    if (ebp == 0)
        esi = 0
    else
        esi = ebp[2]
    
    if (esi s<= arg2)
        return sub_410524(*(arg1 + 0x180), arg2 - esi)
    
    return sub_410524(ebp, arg2)
}
