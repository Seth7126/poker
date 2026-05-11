// ============================================================
// 函数名称: sub_410414
// 虚拟地址: 0x410414
// WARP GUID: 411985fa-cb63-549d-bb79-603c874e7a5a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402980, sub_410524, sub_4104b0
// [被调用的父级函数]: sub_413564, sub_41b738, sub_43647c, sub_431a88, sub_410718, sub_40fe28, sub_41b934, sub_4132b4, sub_4132fc, sub_42e4a4, sub_416358, sub_4134b8, sub_4106bc, sub_41383c, sub_420108, sub_4492b4, sub_43bba0, sub_437bec, sub_42b9cc, sub_42968c, sub_410618, sub_416724, sub_4101c8, sub_4315b8
// ============================================================

int32_t __convention("regparm")sub_410414(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 s< 0 || arg2 s>= arg1[2])
    if (arg2 s< 0 || arg2 s>= arg1[2])
        *arg1
        sub_4104b0(arg2, data_5307e4)
        noreturn
    
    int32_t eax_2 = sub_410524(arg1, arg2)
    arg1[2] -= 1
    int32_t result = arg1[2]
    int32_t ecx
    
    if (arg2 s< result)
        result, ecx = sub_402980(arg1[1] + (arg2 << 2) + 4, arg1[1] + (arg2 << 2), (result - arg2) << 2)
    
    if (eax_2 == 0)
        return result
    
    ecx.b = 2
    return (*(*arg1 + 4))()
}
