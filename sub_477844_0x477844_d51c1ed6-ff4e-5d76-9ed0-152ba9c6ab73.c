// ============================================================
// 函数名称: sub_477844
// 虚拟地址: 0x477844
// WARP GUID: d51c1ed6-ff4e-5d76-9ed0-152ba9c6ab73
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403008, sub_4837ec, sub_47a078, sub_40fa94, sub_403010
// [被调用的父级函数]: sub_47c160
// ============================================================

int32_t __convention("regparm")sub_477844(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void var_10
    void var_10
    sub_40fa94(0xfffffff2, 0xfffffff2, &var_10)
    void* ecx
    ecx.b = 0x38
    *(arg1 + 0x1d4)
    int32_t result = (*(arg1 + 0x1d0))(arg1 + 0xa96, &var_10)
    
    if (arg2 s>= 1 && arg2 s<= *(arg1 + 0xab4) && arg3 s>= 1)
        bool o_1 = unimplemented  {imul eax, esi, 0x1038}
        
        if (o_1)
            sub_403010()
            noreturn
        
        result = sx.d(*(*(arg1 + 0xab0) + arg2 * 0x81c0 + 0x8130))
        
        if (result s>= arg3)
            bool o_2 = unimplemented  {imul edx, esi, 0x1038}
            
            if (o_2)
                sub_403010()
                noreturn
            
            if (arg3 - 1 u> 0x75)
                sub_403008()
                noreturn
            
            result = arg3 * 0x23
            bool o_3 = unimplemented  {imul eax, eax, 0x23}
            
            if (o_3)
                sub_403010()
                noreturn
            
            if (*(*(arg1 + 0xab0) + arg2 * 0x81c0 + (result << 3) - 0xf8) == 0xe)
                bool o_4 = unimplemented  {imul edx, esi, 0x1038}
                
                if (o_4)
                    sub_403010()
                    noreturn
                
                if (arg3 - 1 u> 0x75)
                    sub_403008()
                    noreturn
                
                *(*(arg1 + 0xab0) + arg2 * 0x81c0 + (result << 3) - 0x87) = 0
            
            if (*(arg1 + 0x9ec) != 0)
                if (arg2 == *(arg1 + 0x9e4) && arg3 == *(arg1 + 0x9e8))
                    sub_4837ec(arg1, *(arg1 + 0x10dc), false)
                    *(arg1 + 0x9ec) = 0
                
                if (sub_47a078(arg1, *(arg1 + 0x9e4), *(arg1 + 0x9e8)) == 0)
                    result = sub_4837ec(arg1, *(arg1 + 0x10dc), false)
                    *(arg1 + 0x9ec) = 0
                else
                    result = *(arg1 + 0x9e4) * 0x1038
                    bool o_5 = unimplemented  {imul eax, eax, 0x1038}
                    
                    if (o_5)
                        sub_403010()
                        noreturn
                    
                    if (*(*(arg1 + 0xab0) + (result << 3) + 1) == 0)
                        result = sub_4837ec(arg1, *(arg1 + 0x10dc), false)
                        *(arg1 + 0x9ec) = 0
            
            if (*(arg1 + 0x96a) != 0)
                *(arg1 + 0x96c)
                return (*(arg1 + 0x968))()
    
    return result
}
