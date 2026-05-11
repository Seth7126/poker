// ============================================================
// 函数名称: sub_4a0fc4
// 虚拟地址: 0x4a0fc4
// WARP GUID: cfd781e2-9d4f-5b8b-b1e6-ed7b4c68b909
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_4a0fc4()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_8 = ebx
    int32_t* var_c = &var_4
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp0 = data_53257c
    data_53257c += 1
    
    if (temp0 == 0xffffffff && data_52fbf4 != 0)
        while (true)
            esp_1 = &esp_1[3]
            
            if ((*(*data_52fbf4 + 0x14))() s<= 0)
                break
            
            sub_4030d0((*(*data_52fbf4 + 0x18))())
            (*(*data_52fbf4 + 0x44))()
        
        sub_4030d0(data_52fbf4)
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_4a1028
    return 0
}
