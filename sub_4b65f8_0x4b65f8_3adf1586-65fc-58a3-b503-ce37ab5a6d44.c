// ============================================================
// 函数名称: sub_4b65f8
// 虚拟地址: 0x4b65f8
// WARP GUID: 3adf1586-65fc-58a3-b503-ce37ab5a6d44
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CoUninitialize
// [内部子函数调用]: sub_4030d0, sub_404780
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_4b65f8()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_8 = &__saved_ebp
    int32_t (* var_c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp1 = data_532eec
    data_532eec += 1
    
    if (temp1 == 0xffffffff)
        data_532ef0 = 1
        sub_4030d0(data_532ef4)
        *data_5307b4 = 0
        *data_530028 = 0
        *data_5306e0 = 0
        
        if (data_532efc != 0)
            CoUninitialize()
        
        sub_404780(0x52fe64, sub_4010c0, 4)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
