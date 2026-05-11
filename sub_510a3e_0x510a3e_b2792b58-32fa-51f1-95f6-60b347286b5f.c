// ============================================================
// 函数名称: sub_510a3e
// 虚拟地址: 0x510a3e
// WARP GUID: b2792b58-32fa-51f1-95f6-60b347286b5f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403df8, sub_403e1c, sub_403010
// [被调用的父级函数]: sub_51038c
// ============================================================

void* __stdcallsub_510a3e(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax_7 = arg1[-1]
    int32_t eax_7 = arg1[-1]
    int32_t edx = arg1[3]
    int32_t ecx = arg1[-4]
    int32_t ecx_1 = ecx s>> 1
    bool c = unimplemented  {sar ecx, 0x1}
    
    if (ecx s>> 1 s< 0)
        ecx_1 = adc.d(ecx_1, 0, c)
    
    int32_t temp2 = *(eax_7 + (edx << 2) + 0x24)
    *(eax_7 + (edx << 2) + 0x24) -= ecx_1
    
    if (add_overflow(temp2, neg.d(ecx_1)))
        sub_403010()
        noreturn
    
    void* eax_1 = *data_530084
    int32_t temp3 = *(eax_1 + 0x1b210)
    *(eax_1 + 0x1b210) += 1
    
    if (add_overflow(temp3, 1))
        sub_403010()
        noreturn
    
    void* eax_2 = arg1[-1]
    int32_t temp4 = *(eax_2 + 0x1b204)
    *(eax_2 + 0x1b204) -= 1
    
    if (add_overflow(temp4, 0xffffffff))
        sub_403010()
        noreturn
    
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    sub_403e1c(&arg1[-0xf], 9)
    sub_403df8(&arg1[-5])
    sub_403df8(&arg1[-2])
    sub_403df8(&arg1[4])
    *arg1
    return &arg1[4]
}
