// ============================================================
// 函数名称: sub_4c6c6f
// 虚拟地址: 0x4c6c6f
// WARP GUID: d0b70f07-f68b-5342-a8ef-d10d4b8d0085
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_517f20, sub_4c8aa0, sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: 无
// ============================================================

void*sub_4c6c6f(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax_1 = sub_517f20(8, 1)
    int32_t eax_1 = sub_517f20(8, 1)
    void* edx_1 = data_5301b0
    *(edx_1 + 0x60c40)
    bool o = unimplemented  {imul edx, dword [edx+0x60c40], 0x35}
    
    if (o)
        sub_403010()
        noreturn
    
    *(data_5301b0 + *(edx_1 + 0x60c40) * 0xd4 + 0x581f4) = eax_1
    int32_t edx_2
    edx_2.b = 1
    eax_1.b = 6
    int32_t eax_2 = sub_517f20(eax_1.b, edx_2.b)
    void* edx_3 = data_5301b0
    *(edx_3 + 0x60c40)
    bool o_1 = unimplemented  {imul edx, dword [edx+0x60c40], 0x35}
    
    if (o_1)
        sub_403010()
        noreturn
    
    *(data_5301b0 + *(edx_3 + 0x60c40) * 0xd4 + 0x58120) = eax_2
    int32_t edx_4
    edx_4.b = 1
    eax_2.b = 5
    int32_t eax_3 = sub_517f20(eax_2.b, edx_4.b)
    void* edx_5 = data_5301b0
    *(edx_5 + 0x60c40)
    bool o_2 = unimplemented  {imul edx, dword [edx+0x60c40], 0x35}
    
    if (o_2)
        sub_403010()
        noreturn
    
    *(data_5301b0 + *(edx_5 + 0x60c40) * 0xd4 + 0x5804c) = eax_3
    int32_t edx_6
    edx_6.b = 1
    eax_3.b = 4
    int32_t eax_4 = sub_517f20(eax_3.b, edx_6.b)
    void* edx_7 = data_5301b0
    *(edx_7 + 0x60c40)
    bool o_3 = unimplemented  {imul edx, dword [edx+0x60c40], 0x35}
    
    if (o_3)
        sub_403010()
        noreturn
    
    *(data_5301b0 + *(edx_7 + 0x60c40) * 0xd4 + 0x57f78) = eax_4
    int32_t edx_8
    edx_8.b = 1
    eax_4.b = 7
    int32_t eax_5 = sub_517f20(eax_4.b, edx_8.b)
    void* edx_9 = data_5301b0
    *(edx_9 + 0x60c40)
    bool o_4 = unimplemented  {imul edx, dword [edx+0x60c40], 0x35}
    
    if (o_4)
        sub_403010()
        noreturn
    
    *(data_5301b0 + *(edx_9 + 0x60c40) * 0xd4 + 0x57ea4) = eax_5
    int32_t edx_10
    edx_10.b = 1
    eax_5.b = 3
    int32_t eax_6 = sub_517f20(eax_5.b, edx_10.b)
    void* edx_11 = data_5301b0
    *(edx_11 + 0x60c40)
    bool o_5 = unimplemented  {imul edx, dword [edx+0x60c40], 0x35}
    
    if (o_5)
        sub_403010()
        noreturn
    
    *(data_5301b0 + *(edx_11 + 0x60c40) * 0xd4 + 0x57dd0) = eax_6
    sub_4c8aa0(0)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403e1c(&arg1[-0x73], 0x12)
    sub_403e1c(&arg1[-0x60], 2)
    sub_403df8(&arg1[-0xa])
    void* result
    result.b = *(arg1 - 5)
    *arg1
    return result
}
