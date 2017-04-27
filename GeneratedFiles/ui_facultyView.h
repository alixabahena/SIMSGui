/********************************************************************************
** Form generated from reading UI file 'facultyView.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACULTYVIEW_H
#define UI_FACULTYVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_facultyView
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *MainLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *welcomeLabel;
    QLabel *usernameLabel;
    QFrame *line_2;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *mainPage;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *studentInfoBrowser;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *viewScheduleButton;
    QPushButton *manageScheduleButton;
    QPushButton *viewClassesButton;
    QPushButton *changePasswordButton_2;
    QPushButton *changePasswordButton;
    QPushButton *logoutButton;
    QWidget *viewSchedule;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QLabel *scheduleLabel;
    QTextEdit *semesterScheduleView;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QWidget *manageSchedule;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout_2;
    QPushButton *addClassButton;
    QPushButton *removeClassButton;
    QTableView *manageClassesView;
    QWidget *viewClasses;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout;
    QComboBox *classesSearchBox;
    QPushButton *searchButton;
    QSpacerItem *verticalSpacer_3;
    QLabel *searchLabel;
    QTableView *classesView;
    QFrame *line_3;
    QLineEdit *searchClassesInput;
    QWidget *changePassword;
    QVBoxLayout *verticalLayout_9;
    QFormLayout *formLayout;
    QLabel *currentPasswordLabel;
    QFrame *line_4;
    QLabel *newPasswordLabel;
    QLineEdit *currentPasswordField;
    QLineEdit *newPasswordField;
    QLabel *verifyNewPasswordLabel;
    QLineEdit *verifyNewPasswordField;
    QPushButton *submitButton;
    QSpacerItem *verticalSpacer_4;
    QLabel *passwordChangeStatusLabel;
    QPushButton *backButton;

    void setupUi(QWidget *facultyView)
    {
        if (facultyView->objectName().isEmpty())
            facultyView->setObjectName(QStringLiteral("facultyView"));
        facultyView->resize(747, 613);
        layoutWidget = new QWidget(facultyView);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 731, 591));
        MainLayout = new QVBoxLayout(layoutWidget);
        MainLayout->setObjectName(QStringLiteral("MainLayout"));
        MainLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));

        MainLayout->addLayout(verticalLayout_4);

        welcomeLabel = new QLabel(layoutWidget);
        welcomeLabel->setObjectName(QStringLiteral("welcomeLabel"));
        QFont font;
        font.setPointSize(20);
        welcomeLabel->setFont(font);
        welcomeLabel->setAlignment(Qt::AlignCenter);

        MainLayout->addWidget(welcomeLabel);

        usernameLabel = new QLabel(layoutWidget);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        usernameLabel->setAlignment(Qt::AlignCenter);

        MainLayout->addWidget(usernameLabel);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        MainLayout->addWidget(line_2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        MainLayout->addWidget(label);

        stackedWidget = new QStackedWidget(layoutWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        mainPage = new QWidget();
        mainPage->setObjectName(QStringLiteral("mainPage"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainPage->sizePolicy().hasHeightForWidth());
        mainPage->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(mainPage);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        studentInfoBrowser = new QLabel(mainPage);
        studentInfoBrowser->setObjectName(QStringLiteral("studentInfoBrowser"));
        studentInfoBrowser->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(studentInfoBrowser->sizePolicy().hasHeightForWidth());
        studentInfoBrowser->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(12);
        studentInfoBrowser->setFont(font2);
        studentInfoBrowser->setFrameShape(QFrame::StyledPanel);
        studentInfoBrowser->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(studentInfoBrowser);

        horizontalSpacer = new QSpacerItem(35, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        viewScheduleButton = new QPushButton(mainPage);
        viewScheduleButton->setObjectName(QStringLiteral("viewScheduleButton"));
        sizePolicy1.setHeightForWidth(viewScheduleButton->sizePolicy().hasHeightForWidth());
        viewScheduleButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(viewScheduleButton);

        manageScheduleButton = new QPushButton(mainPage);
        manageScheduleButton->setObjectName(QStringLiteral("manageScheduleButton"));
        sizePolicy1.setHeightForWidth(manageScheduleButton->sizePolicy().hasHeightForWidth());
        manageScheduleButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(manageScheduleButton);

        viewClassesButton = new QPushButton(mainPage);
        viewClassesButton->setObjectName(QStringLiteral("viewClassesButton"));
        sizePolicy1.setHeightForWidth(viewClassesButton->sizePolicy().hasHeightForWidth());
        viewClassesButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(viewClassesButton);

        changePasswordButton_2 = new QPushButton(mainPage);
        changePasswordButton_2->setObjectName(QStringLiteral("changePasswordButton_2"));
        sizePolicy1.setHeightForWidth(changePasswordButton_2->sizePolicy().hasHeightForWidth());
        changePasswordButton_2->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(changePasswordButton_2);

        changePasswordButton = new QPushButton(mainPage);
        changePasswordButton->setObjectName(QStringLiteral("changePasswordButton"));
        sizePolicy1.setHeightForWidth(changePasswordButton->sizePolicy().hasHeightForWidth());
        changePasswordButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(changePasswordButton);

        logoutButton = new QPushButton(mainPage);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        sizePolicy1.setHeightForWidth(logoutButton->sizePolicy().hasHeightForWidth());
        logoutButton->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        logoutButton->setFont(font3);

        verticalLayout->addWidget(logoutButton);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        stackedWidget->addWidget(mainPage);
        viewSchedule = new QWidget();
        viewSchedule->setObjectName(QStringLiteral("viewSchedule"));
        sizePolicy.setHeightForWidth(viewSchedule->sizePolicy().hasHeightForWidth());
        viewSchedule->setSizePolicy(sizePolicy);
        verticalLayout_7 = new QVBoxLayout(viewSchedule);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        scheduleLabel = new QLabel(viewSchedule);
        scheduleLabel->setObjectName(QStringLiteral("scheduleLabel"));
        scheduleLabel->setFont(font2);
        scheduleLabel->setMidLineWidth(4);
        scheduleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(scheduleLabel);

        semesterScheduleView = new QTextEdit(viewSchedule);
        semesterScheduleView->setObjectName(QStringLiteral("semesterScheduleView"));
        semesterScheduleView->setEnabled(false);

        verticalLayout_6->addWidget(semesterScheduleView);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        line = new QFrame(viewSchedule);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line);


        verticalLayout_7->addLayout(verticalLayout_6);

        stackedWidget->addWidget(viewSchedule);
        manageSchedule = new QWidget();
        manageSchedule->setObjectName(QStringLiteral("manageSchedule"));
        verticalLayout_10 = new QVBoxLayout(manageSchedule);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        addClassButton = new QPushButton(manageSchedule);
        addClassButton->setObjectName(QStringLiteral("addClassButton"));

        gridLayout_2->addWidget(addClassButton, 0, 1, 1, 1);

        removeClassButton = new QPushButton(manageSchedule);
        removeClassButton->setObjectName(QStringLiteral("removeClassButton"));

        gridLayout_2->addWidget(removeClassButton, 1, 1, 1, 1);

        manageClassesView = new QTableView(manageSchedule);
        manageClassesView->setObjectName(QStringLiteral("manageClassesView"));

        gridLayout_2->addWidget(manageClassesView, 0, 0, 3, 1);


        verticalLayout_10->addLayout(gridLayout_2);

        stackedWidget->addWidget(manageSchedule);
        viewClasses = new QWidget();
        viewClasses->setObjectName(QStringLiteral("viewClasses"));
        verticalLayout_8 = new QVBoxLayout(viewClasses);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        classesSearchBox = new QComboBox(viewClasses);
        classesSearchBox->setObjectName(QStringLiteral("classesSearchBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(classesSearchBox->sizePolicy().hasHeightForWidth());
        classesSearchBox->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setPointSize(10);
        classesSearchBox->setFont(font4);

        gridLayout->addWidget(classesSearchBox, 0, 1, 1, 1);

        searchButton = new QPushButton(viewClasses);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setFont(font4);

        gridLayout->addWidget(searchButton, 0, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        searchLabel = new QLabel(viewClasses);
        searchLabel->setObjectName(QStringLiteral("searchLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(searchLabel->sizePolicy().hasHeightForWidth());
        searchLabel->setSizePolicy(sizePolicy3);
        searchLabel->setFont(font4);
        searchLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(searchLabel, 0, 0, 1, 1);

        classesView = new QTableView(viewClasses);
        classesView->setObjectName(QStringLiteral("classesView"));

        gridLayout->addWidget(classesView, 3, 0, 1, 4);

        line_3 = new QFrame(viewClasses);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 1, 0, 1, 4);

        searchClassesInput = new QLineEdit(viewClasses);
        searchClassesInput->setObjectName(QStringLiteral("searchClassesInput"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(searchClassesInput->sizePolicy().hasHeightForWidth());
        searchClassesInput->setSizePolicy(sizePolicy4);
        searchClassesInput->setFont(font4);

        gridLayout->addWidget(searchClassesInput, 0, 2, 1, 1);


        verticalLayout_8->addLayout(gridLayout);

        stackedWidget->addWidget(viewClasses);
        changePassword = new QWidget();
        changePassword->setObjectName(QStringLiteral("changePassword"));
        verticalLayout_9 = new QVBoxLayout(changePassword);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        currentPasswordLabel = new QLabel(changePassword);
        currentPasswordLabel->setObjectName(QStringLiteral("currentPasswordLabel"));
        currentPasswordLabel->setFont(font2);

        formLayout->setWidget(1, QFormLayout::LabelRole, currentPasswordLabel);

        line_4 = new QFrame(changePassword);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(2, QFormLayout::SpanningRole, line_4);

        newPasswordLabel = new QLabel(changePassword);
        newPasswordLabel->setObjectName(QStringLiteral("newPasswordLabel"));
        newPasswordLabel->setFont(font2);

        formLayout->setWidget(3, QFormLayout::LabelRole, newPasswordLabel);

        currentPasswordField = new QLineEdit(changePassword);
        currentPasswordField->setObjectName(QStringLiteral("currentPasswordField"));
        currentPasswordField->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        currentPasswordField->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, currentPasswordField);

        newPasswordField = new QLineEdit(changePassword);
        newPasswordField->setObjectName(QStringLiteral("newPasswordField"));
        newPasswordField->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        newPasswordField->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, newPasswordField);

        verifyNewPasswordLabel = new QLabel(changePassword);
        verifyNewPasswordLabel->setObjectName(QStringLiteral("verifyNewPasswordLabel"));
        verifyNewPasswordLabel->setFont(font2);

        formLayout->setWidget(4, QFormLayout::LabelRole, verifyNewPasswordLabel);

        verifyNewPasswordField = new QLineEdit(changePassword);
        verifyNewPasswordField->setObjectName(QStringLiteral("verifyNewPasswordField"));
        verifyNewPasswordField->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        verifyNewPasswordField->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(4, QFormLayout::FieldRole, verifyNewPasswordField);

        submitButton = new QPushButton(changePassword);
        submitButton->setObjectName(QStringLiteral("submitButton"));
        submitButton->setFont(font4);

        formLayout->setWidget(5, QFormLayout::FieldRole, submitButton);

        verticalSpacer_4 = new QSpacerItem(0, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer_4);

        passwordChangeStatusLabel = new QLabel(changePassword);
        passwordChangeStatusLabel->setObjectName(QStringLiteral("passwordChangeStatusLabel"));
        passwordChangeStatusLabel->setFont(font4);
        passwordChangeStatusLabel->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(6, QFormLayout::SpanningRole, passwordChangeStatusLabel);


        verticalLayout_9->addLayout(formLayout);

        stackedWidget->addWidget(changePassword);

        MainLayout->addWidget(stackedWidget);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setEnabled(false);

        MainLayout->addWidget(backButton);


        retranslateUi(facultyView);
        QObject::connect(searchClassesInput, SIGNAL(returnPressed()), searchButton, SLOT(click()));

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(facultyView);
    } // setupUi

    void retranslateUi(QWidget *facultyView)
    {
        facultyView->setWindowTitle(QApplication::translate("facultyView", "Form", Q_NULLPTR));
        welcomeLabel->setText(QApplication::translate("facultyView", "Faculty Portal", Q_NULLPTR));
        usernameLabel->setText(QString());
        label->setText(QApplication::translate("facultyView", "Faculty Information and Options", Q_NULLPTR));
        studentInfoBrowser->setText(QString());
        viewScheduleButton->setText(QApplication::translate("facultyView", "View Current Schedule", Q_NULLPTR));
        manageScheduleButton->setText(QApplication::translate("facultyView", "View Basic Student Info", Q_NULLPTR));
        viewClassesButton->setText(QApplication::translate("facultyView", "View Students in a Class", Q_NULLPTR));
        changePasswordButton_2->setText(QApplication::translate("facultyView", "Enter Grades", Q_NULLPTR));
        changePasswordButton->setText(QApplication::translate("facultyView", "Change Password", Q_NULLPTR));
        logoutButton->setText(QApplication::translate("facultyView", "Logout", Q_NULLPTR));
        scheduleLabel->setText(QApplication::translate("facultyView", "Current Semester Schedule", Q_NULLPTR));
        addClassButton->setText(QApplication::translate("facultyView", "Add Class", Q_NULLPTR));
        removeClassButton->setText(QApplication::translate("facultyView", "Remove Class", Q_NULLPTR));
        searchButton->setText(QApplication::translate("facultyView", "Submit", Q_NULLPTR));
        searchLabel->setText(QApplication::translate("facultyView", "Search: ", Q_NULLPTR));
        currentPasswordLabel->setText(QApplication::translate("facultyView", "Current Password: ", Q_NULLPTR));
        newPasswordLabel->setText(QApplication::translate("facultyView", "New Password: ", Q_NULLPTR));
        verifyNewPasswordLabel->setText(QApplication::translate("facultyView", "Verify New Password: ", Q_NULLPTR));
        submitButton->setText(QApplication::translate("facultyView", "Submit", Q_NULLPTR));
        passwordChangeStatusLabel->setText(QString());
        backButton->setText(QApplication::translate("facultyView", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class facultyView: public Ui_facultyView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACULTYVIEW_H
