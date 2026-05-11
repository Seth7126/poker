// ============================================================
// 函数名称: sub_40b56c
// 虚拟地址: 0x40b56c
// WARP GUID: 19f3adbd-f730-58fe-a259-2a59c6699264
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0, sub_405ae8
// [被调用的父级函数]: sub_4148a8, sub_49732c, sub_497358, sub_4959c0, sub_495a58, sub_4380b8, sub_42b644, sub_413ab8, sub_49722c, sub_49644c, sub_412ca4, sub_4135e8, sub_495150, sub_42663c, sub_412930, sub_4381c4, sub_40c7bc, sub_4267c4, sub_495b60, sub_496aa4, sub_419e00, sub_4335b8, sub_492ed0, sub_4391ac, sub_4972ac, sub_4316f0, sub_410984, sub_4b6234, sub_413014, sub_419de8, sub_419c14, sub_492820, sub_42bdf4, sub_4128f8
// ============================================================

int32_t* __convention("regparm")sub_40b56c(int32_t* arg1, int32_t arg2, char** arg3)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t edi
    int32_t var_c = edi
    int32_t* esp = &var_c
    
    if (arg2.b != 0)
        void var_1c
        esp = &var_1c
        arg1 = sub_4033d0(arg3, arg2)
    
    sub_405ae8(arg3, &arg1[1])
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    return arg1
}
