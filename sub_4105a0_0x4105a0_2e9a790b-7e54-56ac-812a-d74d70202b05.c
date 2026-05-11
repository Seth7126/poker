// ============================================================
// 函数名称: sub_4105a0
// 虚拟地址: 0x4105a0
// WARP GUID: 2e9a790b-7e54-56ac-812a-d74d70202b05
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402980, sub_4104b0
// [被调用的父级函数]: sub_410618, sub_416358, sub_428d48, sub_4479e8, sub_43647c, sub_4463a4, sub_431a88, sub_4449fc, sub_43baf0, sub_4315b8, sub_42e078, sub_42b9cc
// ============================================================

int32_t __convention("regparm")sub_4105a0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg2 s< 0 || arg2 s> arg1[2])
    if (arg2 s< 0 || arg2 s> arg1[2])
        *arg1
        sub_4104b0(arg2, data_5307e4)
        noreturn
    
    if (arg1[2] == arg1[3])
        (**arg1)()
    
    int32_t eax_3 = arg1[2]
    
    if (arg2 s< eax_3)
        sub_402980(arg1[1] + (arg2 << 2), arg1[1] + (arg2 << 2) + 4, (eax_3 - arg2) << 2)
    
    int32_t result = arg1[1]
    *(result + (arg2 << 2)) = arg3
    arg1[2] += 1
    
    if (arg3 == 0)
        return result
    
    return (*(*arg1 + 4))()
}
