// ============================================================
// 函数名称: sub_404e50
// 虚拟地址: 0x404e50
// WARP GUID: 853b0224-f473-5492-a847-b0619f05bb4b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: VariantChangeTypeEx
// [内部子函数调用]: sub_404cdc, sub_404dcc, sub_404cec, sub_404e38
// [被调用的父级函数]: sub_404f44, sub_404dcc
// ============================================================

int16_t* __convention("regparm")sub_404e50(int16_t* arg1, int16_t* arg2, enum VARENUM arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int16_t* pvargDest_1 = arg1
    arg1.w = *pvargDest_1
    int16_t temp0 = arg1.w
    arg1.w -= 0x100
    int16_t* result
    
    if (temp0 == 0x100)
        result = sub_404e38(arg3, arg2)
        
        if (result.b == 0)
            VARIANT pvargDest
            pvargDest...w = 0
            
            if (VariantChangeTypeEx(&pvargDest, arg2, 0x400, 0, arg3) != 0)
                sub_404cdc()
                noreturn
            
            sub_404cec(pvargDest_1)
            *pvargDest_1 = pvargDest...d
            *(pvargDest_1 + 8) = pvargDest...__offset(0x8).d
            result = pvargDest...__offset(0xc).d
            *(pvargDest_1 + 0xc) = result
    else
        int16_t temp1_1 = arg1.w
        arg1.w -= 1
        
        if (temp1_1 == 1)
            result, ebp_1 = sub_404dcc(pvargDest_1, arg2, arg3)
        else
            result = sub_404e38(arg3, arg2)
            
            if (result.b == 0)
                result = VariantChangeTypeEx(pvargDest_1, arg2, 0x400, 0, arg3)
                
                if (result != 0)
                    sub_404cdc()
                    noreturn
    
    *ebp_1
    return result
}
