// ============================================================
// 函数名称: sub_51db70
// 虚拟地址: 0x51db70
// WARP GUID: e73bd859-6a18-5474-9e61-0cb35e8cb87e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40496c, sub_403010
// [被调用的父级函数]: sub_4d6bc8
// ============================================================

void* __convention("regparm")sub_51db70(void* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebx = 0
    int32_t ebx = 0
    bool o_3
    
    while (true)
        int32_t temp0_1 = ebx
        ebx += 1
        
        if (add_overflow(temp0_1, 1))
            sub_403010()
            noreturn
        
        if (ebx s<= *(arg1 + 0x7f0))
            bool o_2 = unimplemented  {imul eax, ebx, 0x5}
            
            if (o_2)
                sub_403010()
                noreturn
            
            if (arg2 != *(arg1 + ebx * 0x14 + 0xc))
                continue
        
        o_3 = unimplemented  {imul eax, ebx, 0x5}
        break
    
    if (o_3)
        sub_403010()
        noreturn
    
    if (arg2 != *(arg1 + ebx * 0x14 + 0xc))
        return sub_40496c(arg3, arg1 + 0xc, sub_48ec28+0x88)
    
    bool o_4 = unimplemented  {imul edx, ebx, 0x5}
    
    if (not(o_4))
        return sub_40496c(arg3, arg1 + ebx * 0x14 + 0xc, sub_48ec28+0x88)
    
    sub_403010()
    noreturn
}
