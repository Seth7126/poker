// ============================================================
// 函数名称: sub_4b2e4c
// 虚拟地址: 0x4b2e4c
// WARP GUID: 672834cf-7d9b-5f02-af34-0015c108c6c0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: FreeLibrary
// [内部子函数调用]: sub_404754
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_4b2e4c()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_8 = &__saved_ebp
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp1 = data_532618
    data_532618 += 1
    
    if (temp1 == 0xffffffff)
        if (data_53261c != 0)
            FreeLibrary(data_53261c)
        
        if (data_532620 != 0)
            FreeLibrary(data_532620)
        
        sub_404754(&data_52fddc, sub_4b2718)
        sub_404754(&data_52fdd0, sub_4b2718)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
