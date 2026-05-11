// ============================================================
// 函数名称: sub_4358ec
// 虚拟地址: 0x4358ec
// WARP GUID: 7fc0c9a2-0934-5ccc-8b74-caf7785d9cd1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_403428, sub_4033d0, sub_435a60
// [被调用的父级函数]: sub_435eac
// ============================================================

int32_t* __convention("regparm")sub_4358ec(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t* esp = &var_8
    int32_t ecx
    
    if (arg2.b != 0)
        void var_18
        esp = &var_18
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_4030a0(ecx, 0)
    arg1[1].b = 1
    arg1[2] = 5
    void* eax_2
    
    if ((*data_530a60 != 2 || *data_530288 s< 4) &&
            (*data_530a60 != 1 || (*data_530288 s<= 4 && (*data_530288 != 4 || *data_530748 s< 0xa))))
        eax_2 = nullptr
    else
        eax_2.b = 1
    
    *(arg1 + 0xd) = eax_2.b
    sub_435a60(arg1, 0)
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    return arg1
}
