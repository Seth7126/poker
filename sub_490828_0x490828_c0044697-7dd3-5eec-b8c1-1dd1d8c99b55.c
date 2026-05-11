// ============================================================
// 函数名称: sub_490828
// 虚拟地址: 0x490828
// WARP GUID: c0044697-7dd3-5eec-b8c1-1dd1d8c99b55
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402d00, sub_403010
// [被调用的父级函数]: sub_490d38
// ============================================================

uint32_t __fastcallsub_490828(int16_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_10 = *arg2
    int32_t var_10 = *arg2
    int32_t var_c
    int32_t* edi = &var_c
    void* esi_1 = &arg2[1]
    *edi = *esi_1
    edi[1] = *(esi_1 + 4)
    sub_402d00(arg1, 0x12, 0)
    *arg1 = 1
    arg1[1] = var_c.w
    int16_t var_8
    arg1[7] = var_8
    *(arg1 + 4) = var_10
    int16_t result_1 = (zx.d(arg1[7]) u>> 3) * zx.d(arg1[1])
    bool o = unimplemented  {imul edx}
    
    if (o)
        sub_403010()
        noreturn
    
    arg1[6] = result_1
    uint32_t result = zx.d(result_1)
    bool c = unimplemented  {imul edx, eax}
    
    if (not(c))
        *(arg1 + 8) = *(arg1 + 4) * result
        return result
    
    sub_403010()
    noreturn
}
