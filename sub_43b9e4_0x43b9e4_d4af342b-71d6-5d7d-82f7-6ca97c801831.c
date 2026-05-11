// ============================================================
// 函数名称: sub_43b9e4
// 虚拟地址: 0x43b9e4
// WARP GUID: d4af342b-71d6-5d7d-82f7-6ca97c801831
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43bcb4, sub_43b9cc, sub_43baf0, sub_43b964
// [被调用的父级函数]: sub_43ba64
// ============================================================

void* __convention("regparm")sub_43b9e4(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg2
    int32_t esi = arg2
    void* result = *(arg1 + 0x58)
    
    if (result != 0)
        int32_t eax = sub_43b964(result)
        
        if (esi s< 0)
            esi = 0
        
        if (eax s<= esi)
            esi = eax - 1
        
        result = sub_43b9cc(arg1)
        
        if (esi != result)
            int32_t* edi_1 = *(arg1 + 0x58)
            sub_43bcb4(edi_1)
            return sub_43baf0(edi_1, esi, arg1)
    
    return result
}
