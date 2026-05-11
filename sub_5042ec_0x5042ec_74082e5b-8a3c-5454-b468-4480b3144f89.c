// ============================================================
// 函数名称: sub_5042ec
// 虚拟地址: 0x5042ec
// WARP GUID: 74082e5b-8a3c-5454-b468-4480b3144f89
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_51bf84, sub_474260, sub_403010
// [被调用的父级函数]: sub_50003c
// ============================================================

float* __convention("regparm")sub_5042ec(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebx = arg1
    int32_t ebx = arg1
    
    if (ebx s> 0x14 || ebx s< 0xffffffec)
        ebx = sub_474260(*data_530304, "ovc_getplayerpos:illegal playerid")
    else if (ebx s<= 0)
    label_504328:
        
        if (ebx s< 0)
            if (neg.d(ebx) == 0x80000000)
                sub_403010()
                noreturn
            
            bool o_3 = unimplemented  {imul eax, eax, 0x2345}
            
            if (o_3)
                sub_403010()
                noreturn
            
            if (*(data_5302e4 + neg.d(ebx) * 0x8d14 - 0x48) == 0)
                goto label_5043b9
            
            goto label_504355
        
    label_5043b9:
        
        if (ebx s>= 0)
            bool o_9 = unimplemented  {imul eax, ebx, 0x2345}
            
            if (o_9)
                sub_403010()
                noreturn
            
            __builtin_memcpy(arg3, data_5301b0 + ebx * 0x8d14 - 0x394, 0x18)
        else
            if (neg.d(ebx) == 0x80000000)
                sub_403010()
                noreturn
            
            bool o_8 = unimplemented  {imul eax, eax, 0x2345}
            
            if (o_8)
                sub_403010()
                noreturn
            
            __builtin_memcpy(arg3, data_5302e4 + neg.d(ebx) * 0x8d14 - 0x394, 0x18)
    else
        bool o_1 = unimplemented  {imul eax, ebx, 0x2345}
        
        if (o_1)
            sub_403010()
            noreturn
        
        if (*(data_5301b0 + ebx * 0x8d14 - 0x48) == 0)
            goto label_504328
        
    label_504355:
        
        if (ebx s>= 0)
            bool o_6 = unimplemented  {imul eax, ebx, 0x2345}
            
            if (o_6)
                sub_403010()
                noreturn
            
            __builtin_memcpy(arg3, data_5301b0 + ebx * 0x8d14 - 0x37c, 0x18)
        else
            if (neg.d(ebx) == 0x80000000)
                sub_403010()
                noreturn
            
            bool o_5 = unimplemented  {imul eax, eax, 0x2345}
            
            if (o_5)
                sub_403010()
                noreturn
            
            __builtin_memcpy(arg3, data_5302e4 + neg.d(ebx) * 0x8d14 - 0x37c, 0x18)
    
    float* result = *data_5301f4
    
    if (result[0x1160].b == 0 || (ebx != 0xfffffff4 && ebx != 0xc))
        return result
    
    bool o_10 = unimplemented  {imul eax, edi, 0x35}
    
    if (not(o_10))
        return sub_51bf84(0, *(data_5301b0 + arg2 * 0xd4 + 0x60f58), *data_52ffd0, arg3, 0)
    
    sub_403010()
    noreturn
}
