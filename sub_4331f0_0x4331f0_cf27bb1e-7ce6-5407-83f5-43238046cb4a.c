// ============================================================
// 函数名称: sub_4331f0
// 虚拟地址: 0x4331f0
// WARP GUID: cf27bb1e-7ce6-5407-83f5-43238046cb4a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_42d8f4, sub_42a50c, sub_403428, sub_41920c
// [被调用的父级函数]: sub_432a70, sub_44bddc
// ============================================================

int32_t* __convention("regparm")sub_4331f0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* esp = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp = &var_20
        arg1 = sub_4033d0(ecx, arg2)
    
    var_8:3.b = arg2.b
    int32_t edx
    void* ebp_1
    edx, ebp_1 = sub_42d8f4(arg1, 0)
    edx.b = 1
    int32_t* eax_1 = sub_41920c(sub_426fb7+0x21, edx)
    arg1[0x7c] = eax_1
    sub_42a50c(eax_1, arg1)
    
    if (*(ebp_1 - 1) != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    esp[3]
    return arg1
}
